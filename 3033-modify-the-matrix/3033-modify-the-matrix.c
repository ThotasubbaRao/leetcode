/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** modifiedMatrix(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int** answer = (int**)malloc(matrixSize * sizeof(int*));
    *returnColumnSizes = (int*)malloc(matrixSize * sizeof(int));
    *returnSize = matrixSize;
    for (int i = 0; i < matrixSize; i++) {
        answer[i] = (int*)malloc(matrixColSize[i] * sizeof(int));
        (*returnColumnSizes)[i] = matrixColSize[i];
        for (int j = 0; j < matrixColSize[i]; j++) {
            answer[i][j] = matrix[i][j];
        }
    }
     for (int j = 0; j < matrixColSize[0]; j++) {
        int maxInColumn = -1;
        for (int i = 0; i < matrixSize; i++) {
            if (answer[i][j] != -1 && (maxInColumn == -1 || answer[i][j] > maxInColumn)) {
                maxInColumn = answer[i][j];
            }
        }
        // Replace -1 elements with the maximum element found in the column
        for (int i = 0; i < matrixSize; i++) {
            if (answer[i][j] == -1) {
                answer[i][j] = maxInColumn;
            }
        }
    }

    return answer;
}
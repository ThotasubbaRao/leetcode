
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
     int rows = matrixSize;
    int cols = *matrixColSize;
    
    if (rows == 0 || cols == 0) {
        return false;
    }
    
    int i = 0;
    int j = cols - 1;

    while (i < rows && j >= 0) {
        if (matrix[i][j] == target) {
            return true;
        }

        if (matrix[i][j] > target) {
            j--;
        } else {
            i++;
        }
    }

    return false;
     
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int m = matrixSize;
    int n = *matrixColSize;
    int totalElements = m*n;
    int* ans = (int *)malloc(totalElements *sizeof(int));
    *returnSize = totalElements;
   int row_be = 0,col_be = 0,col_end = n-1,row_end =m-1;
   int index =0;
   
   while( index<totalElements && row_be <= row_end && col_be <= col_end){
        for(int i=col_be;i<=col_end && index<totalElements;i++){
               ans[index++] = matrix[row_be][i];
        }
        row_be++;
        for(int i=row_be;i<=row_end && index<totalElements;i++){
            ans[index++]=matrix[i][col_end];
        }
        col_end--;
        if(row_be <= row_end){
            for(int i=col_end;i>=col_be && index<totalElements;i--){
                ans[index++] = matrix[row_end][i];
            }
            row_end--;
        }
        if(col_be <= col_end){
            for(int i=row_end;i>=row_be && index <totalElements;i--){
                ans[index++]= matrix[i][col_be];
            }
            col_be++;
        }
   
   
   }
   return ans;
         
    
}
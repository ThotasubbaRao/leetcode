int matrixSum(int** nums, int numsSize, int* numsColSize){
    int score=0;
    int n = numsSize;
    int m = *numsColSize;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            for(int k = j + 1; k < m; k++) {
                if(nums[i][j] > nums[i][k]) {
                    
                    int temp = nums[i][j];
                    nums[i][j] = nums[i][k];
                    nums[i][k] = temp;
                }
            }
        }
    }
    for(int i = 0; i < m; i++) {
        int max = 0;
        for(int j = 0; j < n; j++) {
            if(nums[j][i] > max)
                max = nums[j][i];
        }
        score += max;
    }
    return score;
}
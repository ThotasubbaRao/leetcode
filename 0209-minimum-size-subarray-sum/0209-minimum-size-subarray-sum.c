int minSubArrayLen(int target, int* nums, int numsSize) {
    int L=0,R=0;
    int min = INT_MAX;
    int sum =0;

    while(R<numsSize){
         sum += nums[R];
         while(sum >= target){
             if(min > R-L+1){
                 min = R-L+1;
             }      
             sum -= nums[L];
             L++;
         }
         R++;
    }
    return min==INT_MAX?0 : min;
}
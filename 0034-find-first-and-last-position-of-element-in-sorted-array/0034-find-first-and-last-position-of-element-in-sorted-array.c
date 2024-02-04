/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
     int f=-1,l =-1;
     for (int i=0;i<numsSize;i++){
         if(nums[i] == target){
             if(f==-1){
                f = i;
             }
             l = i;
         }
     }
     int* ans = (int*)malloc(2* sizeof(int));
     ans[0] = f;
     ans[1] = l;
     *returnSize = 2;
     return ans;
}
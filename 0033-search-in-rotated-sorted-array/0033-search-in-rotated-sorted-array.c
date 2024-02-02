int search(int* nums, int numsSize, int target) {
    int i=0;
    int j = numsSize-1;
    int mid;
    while(i<=j){
        mid = (i+j)/2;
        if(nums[mid] == target){
            return mid;
        }
        if(nums[mid] >= nums[0]){
            if(target >= nums[0] && target <= nums[mid]){
                j = mid-1;
            }
            else{
                i = mid+1;
            }
        }
        else{
            if(target >= nums[mid]  && target <= nums[numsSize-1]){
                  i = mid+1;
            }
            else{
                  j = mid-1;
            }
        }
        
    }
    return -1;
}
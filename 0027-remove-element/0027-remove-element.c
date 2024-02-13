int removeElement(int* nums, int numsSize, int val) {
        int j = numsSize-1;
        int i=0;
        while(i<=j){
            if(nums[i] == val && nums[j] != val){
                nums[i] = nums[j];
                j--;
            }
            if(nums[j] == val){
                j--;
            }
            if(nums[i] != val){
                i++;
            }
        }
        return i;
}
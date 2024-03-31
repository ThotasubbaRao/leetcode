void sortColors(int* nums, int numsSize) {
    int start=0;
    int mid =0;
    int end=numsSize-1;
    while(mid<=end){
        if(nums[start]==2){
            int temp = nums[end];
            nums[end]=2;
            nums[start]=temp;
            end--;
        }
        else if(nums[start]==0){
            start++;
            mid++;
        }
        else if(nums[mid]==2){
            int temp=nums[end];
            nums[end]=2;
            nums[mid]=temp;
            end--;
            
        }
        
        else if(nums[mid]==0){
            int temp=nums[start];
            nums[start]=0;
            nums[mid]=temp;
            start++;
        }
        else if(nums[start]==1){
            mid++;
        }
        
        
        
    }
    
}
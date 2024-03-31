int thirdMax(int* nums, int numsSize) {
    int n=numsSize;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]<nums[j]){
                int temp = nums[j];
                nums[j]= nums[i];
                nums[i]=temp;
            }
        }
        
    }
    int count=1,ind;
    if(n<3){
        return nums[0];
    }
    else{
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]!=nums[i+1])
               count++;
            if(count==3)
                ind=i+1;

        }
        if(count<3){
            return nums[0];
        }
        return nums[ind];
    }
    
}
int maximumCount(int* nums, int numsSize) {
       int pos =0;
        int neg =0;
        if(numsSize==0){
            return 0;
        }
        else{
            for(int i=0;i <numsSize;i++){
                if(nums[i]>0){
                    pos += 1;
                }
                else if(nums[i]<0){
                    neg += 1;
                }
            }
        }

        return pos>neg ? pos :neg;
}
bool isMonotonic(int* nums, int numsSize) {
    bool asc = true;
    bool des = true;
    for(int i=0;i<numsSize-1;i++){
        if(nums[i]< nums[i+1]){
            des = false;
        }
        else if(nums[i] > nums[i+1]){
            asc = false;
        }
    }
    return asc || des;

}
int singleNumber(int* nums, int numsSize) {
    int number = nums[0];
    for(int i=0;i<numsSize;i++){
        number = nums[i];
        bool b = false;
        for(int j = 0;j < numsSize;j++){
            if(number == nums[j] &&  j != i){
                b = true;
                break;
            }
        }
        if(!b){
            return number;
        }
    }
    return number;
}
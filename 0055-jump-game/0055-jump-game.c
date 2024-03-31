bool canJump(int* nums, int numsSize) {
    int maxReach = 0; 

    for (int i = 0; i < numsSize; i++) {
        if (i > maxReach) {
            return false; 
        }
        maxReach = (i + nums[i]) > maxReach ? (i + nums[i]) : maxReach; // Update the furthest 
        if (maxReach >= numsSize - 1) {
            return true; // If you can reach the last index, return true
        }
    }

    return false;
}
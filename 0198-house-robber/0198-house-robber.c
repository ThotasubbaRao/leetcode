int rob(int* nums, int numsSize) {
    if (numsSize == 0)  return 0;
    if (numsSize == 1)  return nums[0];
    if (numsSize == 2)  return fmax(nums[0], nums[1]);

    int f = nums[0];
    int s = fmax(nums[0], nums[1]);
    for (int i = 2; i < numsSize; i++) {
        int current = fmax(nums[i] + f, s);
        f = s;
        s = current;
    }
    return s;
}
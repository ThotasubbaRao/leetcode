class Solution {
    public int missingNumber(int[] nums) {
        int len = nums.length;
        int sum = len*(len+1)/2 ;
        int count =0;
        for(int i=0;i<len;i++){
            count += nums[i];
        }
        return sum-count;
    }
}
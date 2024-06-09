class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] ans ={-1,-1};
        int start = searching(nums,target,true);
        int end = searching(nums,target,false);
        ans[0] = start;
        ans[1] = end;
        return ans; 
    }

    public static int searching(int[] nums,int target,boolean index){
        int ans=-1;
        int start = 0;
        int end = nums.length -1;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(nums[mid]== target){
                ans = mid;
                if(index){
                    end = mid -1;
                }
                else{
                    start = mid+1;
                }
            }
            else if (nums[mid] < target){
                start = mid +1;
            }
            else{
                end = mid -1;
            }
        }
        return ans;
    }
}
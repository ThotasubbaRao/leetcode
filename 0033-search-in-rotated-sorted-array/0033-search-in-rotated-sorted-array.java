class Solution {
    public int search(int[] nums, int target) {
        int pivot = findingpivot(nums);
        int firsthalf = binarysearch(nums,target,0,pivot);
        if(firsthalf != -1){
            return firsthalf;
        }
        return binarysearch(nums,target,pivot+1,nums.length-1);
    }
    public static int binarysearch(int[] arr,int target,int start,int end){
        while(start<= end){
            int mid =start+(end-start)/2;
            if(arr[mid] ==target){
                return mid;
            }
            else if(arr[mid] > target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return -1;
    }
    public static int findingpivot(int[] arr){
       int start =0;
		int end = arr.length -1;
		while(start <= end) {
			int mid = start + (end-start)/2;
			if(mid < end && arr[mid] > arr[mid+1]) {
				return mid;
			}
			if(mid > start && arr[mid] < arr[mid-1]) {
				return mid-1;
			}
			if(arr[mid] <= arr[start]) {
				end = mid-1;
			}
			else {
				start = mid+1;
			}
		}
		return -1;
           
    }
}
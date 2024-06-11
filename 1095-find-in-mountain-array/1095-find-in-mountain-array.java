/**
 * // This is MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * interface MountainArray {
 *     public int get(int index) {}
 *     public int length() {}
 * }
 */
 
class Solution {
    public int findInMountainArray(int target, MountainArray mountainArr) {
        int peakindex =findelement(mountainArr);
        int minindex = binary(mountainArr,0,peakindex,target);
		if(minindex==-1) {
		  return binary(mountainArr,peakindex+1,mountainArr.length()-1,target) ;
		}else {
			return minindex;
	    }
    }
    public static int findelement(MountainArray arr) {
		int start =0;
		int end = arr.length()-1;
		
		while(start<end) {
			int mid = start+ (end-start)/2;
			if(arr.get(mid) > arr.get(mid+1)){
				end = mid;
			}
			else {
				start = mid+1;
			}
		}
		return start;
	}
    public static int binary(MountainArray arr,int start,int end,int target) {
		boolean IsASC = arr.get(start) < arr.get(end);
	    
	    	while(start<=end) {
				int mid = start+(end-start)/2;
				if(arr.get(mid)==target) {
					return mid;
				}
				if(IsASC) {
					if(arr.get(mid) > target) {
						end = mid-1;
					}else {
						start = mid+1;
					}
				}
				else {
					if(arr.get(mid) < target) {
						end = mid-1;
					}else {
						start = mid+1;
					}
				}
				
			}
		return -1;
		
	}
}
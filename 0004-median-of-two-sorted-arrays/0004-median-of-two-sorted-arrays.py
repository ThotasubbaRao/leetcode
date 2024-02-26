class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        merge = nums1+nums2
        merge.sort()
        total = len(merge)
        if(total%2==1):
            return float(merge[total//2])
        else:
            mid1 = merge[total//2-1]
            mid2 = merge[total//2]
            return (float(mid1)+float(mid2))/2.0
        
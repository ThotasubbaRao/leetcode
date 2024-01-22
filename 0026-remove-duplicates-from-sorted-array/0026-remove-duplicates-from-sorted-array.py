class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if(len(nums)==0):
            return 0
        f =0
        for each in range(len(nums)):
            if(nums[each] != nums[f]):
                f += 1
                nums[f] = nums[each]
        return f+1

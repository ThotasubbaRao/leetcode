class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
       lastdigit = len(nums)-1
       start =0
       while(start <= lastdigit ):
           if(nums[start]== val and nums[lastdigit] != val):
               nums[start] = nums[lastdigit]
               lastdigit -= 1
           if(nums[lastdigit] == val):
               lastdigit -= 1
           if(nums[start] != val):
               start += 1

       return start





        
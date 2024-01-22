class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        num =0 
        for each in digits:
            num = num *10 + each
        num = num+1 
        list_a =[]
        for each in str(num):
            list_a.append(int(each))
        return list_a    

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        comstr = ""
        strs = sorted(strs)
        fw =strs[0]
        lw = strs[-1]
        for each in range(len(strs[0])):
            if (fw[each] != lw[each]):
                return comstr
            comstr += fw[each]
        return comstr
        
         
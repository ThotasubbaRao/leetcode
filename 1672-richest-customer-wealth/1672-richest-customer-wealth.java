class Solution {
    public int maximumWealth(int[][] accounts) {
        int max = Integer.MIN_VALUE;
        for(int[] each: accounts){
            int s=0;
            for(int e: each){
               s += e;
            }
            if(max < s){
                max = s;
            }
        }
        return max ;
    }
}
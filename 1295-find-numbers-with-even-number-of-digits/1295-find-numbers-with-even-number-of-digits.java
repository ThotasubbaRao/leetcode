class Solution {
    public int findNumbers(int[] nums) {
         int count =0;
       for(int each:nums){
          if(each<0){
              each = -1*each;
          } 
          if(((int)Math.log10(each)+1) %2==0) count++;
       }
       return count;
    }
}
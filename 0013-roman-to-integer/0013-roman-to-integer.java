class Solution {
    static int value(char str){
        if(str=='V')
            return 5;
        if(str=='X')
            return 10;
        if(str =='L')
            return 50;
        if(str =='C')
            return 100;
        if(str =='D')
            return 500;
        if(str =='M')
            return 1000;
       return 1;                            
           
    }
    public int romanToInt(String s) {
        int sumOfRoman =0;
        for(int i=0;i<s.length();i++){
            int str1 = value(s.charAt(i));
            if(s.length()-1 > i ){
                int str2 = value(s.charAt(i+1));
                if(str1>=str2){
                   sumOfRoman += str1;
                }
                else{
                   sumOfRoman += str2-str1;
                   i++;
                   
                }
            }
            else{
                sumOfRoman += str1;
                i++;
            }
          
        }
        return sumOfRoman;
    }
}
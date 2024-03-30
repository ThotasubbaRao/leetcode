class Solution {
    public String capitalizeTitle(String title) {
         String s ="";
        String[] arr = title.split(" ");
        for(int i=0;i<arr.length;i++){
            if(arr[i].length() >= 3){
                char ch = Character.toUpperCase(arr[i].charAt(0));
                String l = (arr[i].substring(1)).toLowerCase();
                s += ch+l +" ";

            }
            else{
                s += arr[i].toLowerCase()+" ";
            }
        }
        return s.substring(0,s.length()-1);
    }
}
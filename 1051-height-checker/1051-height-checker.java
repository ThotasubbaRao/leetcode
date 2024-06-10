class Solution {
    public int heightChecker(int[] heights) {
        int count =0;
        int[] org = new int[heights.length];
        System.arraycopy(heights,0,org,0,heights.length);
        sorting(heights);
        for(int i=0;i<heights.length;i++){
            if(org[i] != heights[i]){
                count++;
            }
        }
        return count;
    }
    public static void sorting(int[] ex){
        for(int i=0;i<ex.length-1;i++){
            int maxindex = findmax(ex,0,ex.length-1-i);
            swap(ex,maxindex,ex.length-1-i);
        }
    }
    public static void swap(int[] ex,int a,int b){
        int temp = ex[a];
        ex[a] = ex[b];
        ex[b] = temp;
    }
    public static int findmax(int[] ex ,int start,int end){
        int max = start;
        for(int i=start+1;i<=end;i++){
            if(ex[i] > ex[max]){
                max = i;
            }
        }
        return max;
    }
}
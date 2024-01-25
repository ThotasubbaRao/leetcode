int maxProfit(int* prices, int pricesSize) {
    int min = prices[0];
    int profit =0;
    int maxprofit=0;
    for(int i=1;i<pricesSize;i++){
         if(min < prices[i]){
             profit = prices[i]-min;
             if(profit > maxprofit){
                 maxprofit = profit;
             }
             
         }
         else if(min > prices[i]){
            min = prices[i];
         }
    }
    
    return maxprofit;
}
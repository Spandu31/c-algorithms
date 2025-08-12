/**You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.**/

int maxProfit(int* prices, int pricesSize) {
    int profit=0;int buy=INT_MAX;int temp;

    for (int i=0;i<pricesSize;i++){
        if (prices[i]<buy){
            buy=prices[i];
        }else {
        temp=prices[i]-buy;
        if (temp>profit){
            profit=temp;
            }}
        }
    
    return profit;
}

// STOCK BUY AND SELL- MAX ONE TRANSCATION ALLOWED
// User function Template for C
int maximumProfit(int prices[], int pricesSize) {
    // code here
    int min=prices[0];
    int res=0;
    for (int i=1; i<pricesSize;i++){
        if(prices[i]<min){
            min= prices[i];
        }
        if (res<(prices[i]-min)){
            res=prices[i]-min;
        }
    }
    return res;
}
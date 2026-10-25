int maxProfit(int* prices, int pricesSize){
if(pricesSize <= 0) return 0;
int minPrice = prices[0];
int maxPro = 0;
for(int i=1; i<pricesSize; i++){
if(prices[i] < minPrice) minPrice = prices[i];
else if(prices[i] - minPrice > maxPro) maxPro = prices[i] - minPrice;
}
return maxPro;
}
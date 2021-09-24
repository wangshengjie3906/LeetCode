int maxProfit(int* prices, int pricesSize){
    if(pricesSize == 1)
    {
        return 0;
    }
    int minPrice = prices[0];
    int theMax = 0;
    for(int i = 0; i < pricesSize; i++)
    {
        if(prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        if((prices[i] - minPrice) > theMax)
        {
            theMax = prices[i] - minPrice;
        }
    }

    return theMax;
}
int maxProfit(int* prices, int pricesSize) {
    int bestpro=0,curpro=0;
    int i;
    int bestbuy=prices[0];

    for(i=1;i<pricesSize;i++)
    {
        if(bestbuy>prices[i])
        {
            bestbuy=prices[i];
        }

        curpro=prices[i]-bestbuy;
        if(curpro>bestpro)
        {
            bestpro=curpro;
        }

    }

    return bestpro;
}
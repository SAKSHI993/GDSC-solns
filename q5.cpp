#include<algorithm>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=1;
    int maxx = 0;
    if(prices.size() <= 1){
    return maxx;
    }
    while(j<prices.size()){
    if(prices[j]<prices[i]){
    i=j;
    }
    else{
    maxx = max(maxx,(prices[j]-prices[i]));
    }
    j++;
    }
    return maxx;
    }
};
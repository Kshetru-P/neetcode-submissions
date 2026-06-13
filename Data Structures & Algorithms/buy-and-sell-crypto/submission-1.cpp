class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bp=prices[0];
        int mp=0;
        for(int i=1;i<prices.size();i++){
            int pf=prices[i]-bp;
            mp=max(mp,pf);
            bp=min(bp,prices[i]);
        }
        return mp;
    }
};

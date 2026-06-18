class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,cand=0;
        for(auto x:nums){
            if(count==0) cand=x;
            if(cand==x)count++;
            else count--;
        }
        return cand;
    }
};
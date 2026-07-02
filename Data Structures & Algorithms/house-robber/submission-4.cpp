class Solution {
public:
    int rob(vector<int>& nums) {

        int next1 = 0; // dp[i+1]
        int next2 = 0; // dp[i+2]

        for(int i = nums.size() - 1; i >= 0; i--) {

            int rob = nums[i] + next2;
            int skip = next1;

            int curr = max(rob, skip);

            next2 = next1;
            next1 = curr;
        }

        return next1;
    }
};
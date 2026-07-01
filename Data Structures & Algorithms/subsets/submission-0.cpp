class Solution {
public:
    void solve(int p,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans){
        if(p==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[p]);
        solve(p+1,nums,temp,ans);

        temp.pop_back();
        solve(p+1,nums,temp,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        solve(0,nums,temp,ans);
        return ans;

    }
};

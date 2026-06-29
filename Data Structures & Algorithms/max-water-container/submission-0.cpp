class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int ma=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int hmin=min(heights[j],heights[i]);
                int ar=hmin*abs(j-i);
                ma=max(ma,ar);
            }
        }
        return ma;
    }
};

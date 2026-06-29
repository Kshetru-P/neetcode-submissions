class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int ma=0;
        int i=0,j=n-1;
        while(i<n && j>=0){
            int ar=(j-i)*min(heights[i],heights[j]);
            if(heights[i]<heights[j]) i++;
            else j--;
            ma=max(ma,ar);
        }
        return ma;
        
    }
};

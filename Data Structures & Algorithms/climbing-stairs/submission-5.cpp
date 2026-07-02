class Solution {
public:
    int solve(int n){
        if(n<=2) return n;
        
        int p2=1; 
        int p1=2;

        for(int i=3;i<=n;i++){
            int cur=p1+p2;
            p2=p1;
            p1=cur;
        }
        return p1;
        
    }
    int climbStairs(int n) {
        return solve(n);
    }
};

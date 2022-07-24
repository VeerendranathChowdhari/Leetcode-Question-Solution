class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> dp(n+1);
        
        dp[0]=0; 
        
        if(n==0)return dp;
        
        for(int i=1;i<=n;i++)
        {
            dp[i]=dp[i/2]+i%2;  // i%2 return 1 for odd, return 0 for even
        }
            
            
         return dp;   
        
    }
};
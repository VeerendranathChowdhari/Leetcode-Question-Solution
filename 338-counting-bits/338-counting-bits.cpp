class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> dp(n+1);
        
        dp[0]=0; 
        if(n==0)return dp;
        dp[1]=1;
        if(n==1)return dp;
        dp[2]=1;
        if(n==2)return dp;
      
        for(int i=3;i<=n;i++)
        {
            if(i%2!=0){
                dp[i]=dp[i-1]+1;
            }
            else
            {
                dp[i]=dp[i/2];
            }
        }
            
            
         return dp;   
        
    }
};
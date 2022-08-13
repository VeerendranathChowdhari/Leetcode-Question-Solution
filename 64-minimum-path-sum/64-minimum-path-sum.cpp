class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
       int m = grid.size();
       int n = grid[0].size();
        
        vector<vector<int>>sum(m,vector<int>(n,0));
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            sum[0][i]=ans+grid[0][i];
            
            ans=sum[0][i];
        }
        ans=0;
        for(int i=0;i<m;i++)
        {
            sum[i][0]=ans+grid[i][0];
            
            ans=sum[i][0];
        }
        
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                sum[i][j]=grid[i][j]+min(sum[i-1][j],sum[i][j-1]);
            }
        }
        
        return sum[m-1][n-1];
        
    }
};
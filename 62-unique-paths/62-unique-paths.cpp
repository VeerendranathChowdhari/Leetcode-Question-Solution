class Solution {
public:
    int uniquePaths(int m, int n) {
        
        vector<vector<int>>sum(m,vector<int>(n,0));
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                
                if(i==0 || j==0)sum[i][j]=1;
                
                else sum[i][j]=sum[i-1][j]+sum[i][j-1];
                
            }
        }
        
        return sum[m-1][n-1];
    }
};
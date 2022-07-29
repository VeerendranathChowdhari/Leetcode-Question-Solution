class Solution {
public:
    int row,col;
    bool helper(vector<vector<char>>& board, string word,int n,int i ,int j,vector<vector<bool>>&vis)
    {
        
        if(n==0 && board[i][j]==word[n])return true;//last character matches
        
        if(n==0 && board[i][j]!=word[n])return false;//last character  notmatches
        
        if(board[i][j]!=word[n])return false;//current word not matches
        
        vis[i][j]=true;
        
        if((i-1>=0 && !vis[i-1][j] && helper(board,word,n-1,i-1,j,vis)))return true;
        
        else if (j-1>=0 && !vis[i][j-1] && helper(board,word,n-1,i,j-1,vis))return true;
        
        else if(i+1<row && !vis[i+1][j]  && helper(board,word,n-1,i+1,j,vis))return true;
        
        else if(j+1<col && !vis[i][j+1] && helper(board,word,n-1,i,j+1,vis))return true;
        
        vis[i][j]=false;
           
        return false;
    }
    
    
    bool exist(vector<vector<char>>& board, string word) {
        
        int n=word.length();
        
        row=board.size();
        
        col=board[0].size();
        
        vector<vector<bool>>vis(row,vector<bool>(col,false));
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j]== word.back())
                {
                    if(helper(board,word,n-1,i ,j,vis))return true;
                }
            }
        }
        
        return false;
        
    }
};
class Solution {
public:
    int row,col;
    bool helper(vector<vector<char>>& board, string word,int n,int i ,int j)
    {
        
        if(n==0 && board[i][j]==word[n])return true;//last character matches
         
        if(board[i][j]!=word[n])return false;//current word not matches
        
        char ch=board[i][j];
        board[i][j]='9';
        
        //search in top
        if((i-1>=0 && '9'!=board[i-1][j] && helper(board,word,n-1,i-1,j)))return true;
        //search in left
        else if (j-1>=0 && '9'!=board[i][j-1] && helper(board,word,n-1,i,j-1))return true;
        //search in bottom
        else if(i+1<row && '9'!=board[i+1][j]  && helper(board,word,n-1,i+1,j))return true;
        //search in right
        else if(j+1<col && '9'!=board[i][j+1] && helper(board,word,n-1,i,j+1))return true;
        
        board[i][j]=ch;
        
        return false;
    }
    
    
    bool exist(vector<vector<char>>& board, string word) {
        
        int n=word.length();
        
        row=board.size();
        
        col=board[0].size();
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j]== word.back())
                {
                    if(helper(board,word,n-1,i ,j))return true;
                }
            }
        }
        
        return false;
        
    }
};
class Solution {
    int row,col;
    int count(vector<vector<int>>& board,int i,int j)
    {
        int count=0;
        
        if(i-1>=0 && board[i-1][j]==1)count++;
        
        if(j-1>=0 && board[i][j-1]==1)count++;
        
        if(i+1<row && board[i+1][j]==1)
        {
            count++;
        }
        
        if(j+1<col && board[i][j+1]==1)count++;
        
        //diagonal
        
        if((i-1>=0 && j-1>=0)&& board[i-1][j-1]==1)count++;
        
        if((i-1>=0 && j+1<col)&& board[i-1][j+1]==1)count++;
        
        if((i+1<row && j-1>=0)&& board[i+1][j-1]==1)count++;
        
        if((i+1<row && j+1<col)&& board[i+1][j+1]==1)count++;
        
        return count;
    }
    
public:
    void gameOfLife(vector<vector<int>>& board) {
        
        row=board.size();
        
        col=board[0].size();
    
        vector<vector<int>>board1=board;
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
               int res=count(board,i,j);
                cout<<res<<" ";
                if(board[i][j]==0)
                { 
                    if(res==3)
                    {
                        board1[i][j]=1;
                    }
                    else board1[i][j]=0;
                }
                
                else
                {
                    if(res<2)
                    {
                        board1[i][j]=0;
                    }
                    else if(res==2 || res==3)
                    {
                        board1[i][j]=1;
                    }
                    else{
                        board1[i][j]=0;
                    }
                }
            }
        }
        
         for(int i=0;i<board1.size();i++)
            for(int j=0;j<board1[i].size();j++)
                   board[i][j]=board1[i][j];
    }
};
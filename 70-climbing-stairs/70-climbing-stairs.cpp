class Solution {
public:
    int climbStairs(int n) {
        
        if(n<=3)return n;
        
        int frst=2,sec=3;
        
        for(int i=4;i<=n;i++)
        {
            int x=sec;
            sec=frst+sec;
            frst=x;
        }
        
        return sec;
    }
};
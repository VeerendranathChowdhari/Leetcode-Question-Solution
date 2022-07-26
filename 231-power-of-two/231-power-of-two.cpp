class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n<=0)return false;
        
        if(n==1)return true;
        
        while(n>1)
        {    //n%2!=0
            if(n&1!=0)return false;
            
            n=n>>1;//n=n/2
        }
        
        return true;
        
    }
};
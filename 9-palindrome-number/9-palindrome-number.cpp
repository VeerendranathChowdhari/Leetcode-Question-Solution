class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0)return false;
        
        long long oldNumb=x;
        long long newNumb=0;
        while(x>0)
        {
            newNumb= newNumb*10+x%10;
            x=x/10;
        }
        cout<<oldNumb<<" "<<newNumb;
        while(oldNumb>0)
        {
            if(oldNumb%10!=newNumb%10)return false;
            
              oldNumb/=10;
            
              newNumb/=10;
        }
        
        return true;
    }
};
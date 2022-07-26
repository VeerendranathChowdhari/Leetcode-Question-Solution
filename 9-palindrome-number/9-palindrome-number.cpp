class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0)return false;//(-ve)value is not palindrom
        
        long long oldNumb=x;
        long long newNumb=0;
        //reverse the given number
        while(x>0)
        {
            newNumb= newNumb*10+x%10;
            x=x/10;
        }
        cout<<oldNumb<<" "<<newNumb;
        
        return (oldNumb==newNumb);
    }
};
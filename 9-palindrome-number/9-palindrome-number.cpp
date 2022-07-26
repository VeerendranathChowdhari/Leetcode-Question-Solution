class Solution {
public:
    bool isPalindrome(int x) {
        
       if (x<0 || (x!=0 && x%10==0)) return false;//(-ve)value is not palindrom
        
        long long newNumb=0;
        //reverse the given number
        while(x>newNumb)
        {
            newNumb= newNumb*10+x%10;
            x=x/10;
        }

        cout<<x<<" "<<newNumb;
        return (x==newNumb || x==newNumb/10);
    }
};
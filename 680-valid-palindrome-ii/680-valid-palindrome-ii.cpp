class Solution {
public:
    bool validPalindrome(string s) {
     
        if(s.length()==0 || s.length()==1 )return true;
        
        int low=0,high=s.length()-1;
        char first='0',second='0';
        
        while(low<high)
        {
            if(s[low]!=s[high]){
                
                first=s[low];
                second=s[high];
                break;
            }
            low++,high--;
        }
        
        cout<<s[low]<<" "<<s[high]<<low<<endl;
        
        if(first=='0')return true;
        
        for(int i=0;i<2;i++)
        {
            char val;
            if(i==0)val=first;
            else val=second;
            
            int low=0,high=s.length()-1,l=0,h=0;
            while(low<=high)
            {
                if(s[low]==s[high])
                {
                    low++,high--;
                }
                
                else if(s[low]==val && l==0){
                    low++;l++;h++;
                }
                else if(s[high]==val && h==0)
                {
                    high--; l++;  h++;
                }
                
                else{
                    
                    if(s[low]!=s[high])break;
                    low++,high--;
                }   
            }
        cout<<s[low]<<" "<<s[high]<<val;
        if(low>=high)return true;
            
        }
        
        return false;
    }
};
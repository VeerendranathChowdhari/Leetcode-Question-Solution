class Solution {
public:
    string addBinary(string a, string b) {
        
        int i=a.length()-1,j=b.length()-1,carry=0;
        string res="";
        while(i>=0 && j>=0)
        {
            int val=(stoi(to_string(a[i])))-'0'+(stoi(to_string(b[j])))-'0';
            val+=carry;
            if(val==3){
                carry=1;
                res+="1";
            }
            else if(val==2){
                carry=1;
                res+="0";
            }
            else {
                
                res+=to_string(val);
                 carry=0;
            
            }
            i--,j--;
        }
        
        while(i>=0 )
        {
            int val=(stoi(to_string(a[i])))-'0';
            val+=carry;
            if(val==3){
                carry=1;
                res+="1";
            }
            else if(val==2){
                carry=1;
                res+="0";
            }
            else {
                cout<<val;
                 res+=to_string(val);
                 carry=0;
            
            }
            i--;
        }
        
        while(j>=0 )
        {
            int val=(stoi(to_string(b[j])))-'0';
            val+=carry;
            if(val==3){
                carry=1;
                res+="1";
            }
            else if(val==2){
                carry=1;
                res+="0";
            }
            else {
                
                 res+=to_string(val);
                 carry=0;
            
            }
            j--;
        }
        
        if(carry>0 )
        {
             res+="1";
        }
        
        reverse(res.begin(),res.end());
        
        return res;
        
    }
};
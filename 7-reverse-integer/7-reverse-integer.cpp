class Solution {
public:
    int reverse(int x) {
        
        bool flag=false;
        unsigned int res=0;
        if(x<0){x=abs(x);flag=true;} //when x is -(ve)
        
        string s=to_string(x);
        
        int i;
        if(s.front()=='-1')i= s.length()-2;
        else i=s.length()-1;
        
        while(x>0)
        {
           if((x%10)*pow(10,i) > pow(2,31)-1)return 0;
            
           res+=(x%10)*pow(10,i);
            
            i--;
            x=x/10;
        }
        
        cout<<res;
        
        if(res>pow(2,31)-1)return 0;
        
        if(flag==true)
        {
            s="-";
            s+=to_string(res);
            
            return stoi(s);
            
        }
        return res;
    }
};
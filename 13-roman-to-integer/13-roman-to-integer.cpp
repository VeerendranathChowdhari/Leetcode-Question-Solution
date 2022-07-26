class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char, int> mp= { { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };
                                   
        int res = mp[s.back()];
        int prev=res; cout<<res;
        
        for(int i=s.length()-2;i>=0;i--)
        {
            if(mp[s[i]]>=prev)res+=mp[s[i]];
            
            else {
                res-=mp[s[i]];
            }
            
            prev=mp[s[i]];
        }
        
        return res;
    }
};
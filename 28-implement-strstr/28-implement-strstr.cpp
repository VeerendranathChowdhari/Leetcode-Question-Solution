class Solution {
public:
    int strStr(string haystack, string needle) {
     
        if(needle.length()==0)return 0;
        
        if(haystack.length()==0)return -1;
        
        if(haystack.find(needle)==string::npos)return -1;
        
        else return haystack.find(needle);
        
    }
};
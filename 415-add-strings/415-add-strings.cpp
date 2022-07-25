class Solution {
public:
    string addStrings(string nums1, string nums2) {
        
        string res="";
        
        int i =nums1.length()-1,j = nums2.length()-1,sum=0;
        
        while(i>=0 && j>=0)
        {
            sum+=int(nums1[i--]-'0')+int(nums2[j--]-'0');
            
            res.push_back(char(sum%10 + '0'));//2+'0'=50 ,char(2+'0')=2
            
            sum=sum/10;  
        }
        
        while(i>=0)
        {
            sum+=int(nums1[i--]-'0');
            
            res.push_back(char(sum%10 + '0'));//2+'0'=50 ,char(2+'0')=2
            
            sum=sum/10; 
        }
        
        while(j>=0)
        {
            sum+=int(nums2[j--]-'0');
            
            res.push_back(char(sum%10 + '0'));//2+'0'=50 ,char(2+'0')=2
            
            sum=sum/10; 
        }
        
        while(sum>0)
        {
            
            res.push_back(char(sum%10 + '0'));//2+'0'=50 ,char(2+'0')=2
            
            sum=sum/10; 
        }
        
        reverse(res.begin(), res.end());
        
        return res;
        
    }
};
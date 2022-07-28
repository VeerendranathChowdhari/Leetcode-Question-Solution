class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n=nums.size();
        
        if(n<3)return {};
        
        vector<vector<int>> result;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-2;i++)//we are leaving last 2 elements for j and k(pair)
        {
            if(i==0 || nums[i]!=nums[i-1])//to avoid duplicates
            {
                 int j=i+1,k=n-1; //finding pair
                
                 while(j<k)
                 {
                     int sum=nums[i]+nums[j]+nums[k];//ex:[-2,-1,0,1,2,3]
                     
                     if(sum==0)
                     {
                         result.push_back({nums[i],nums[j],nums[k]});
                         //to avoid duplicates
                         // ex:[-2,-1,-1,0,1,2,3,3]
                         while(j<k && nums[j]==nums[j+1])j++;
                         while(j<k && nums[k]==nums[k-1])k--;
                         
                         j++,k--;
                     }
                     
                     else if(sum>0)k--;
                     
                     else j++;
                 }
            }
           
        }
        
        return result;
        
    }
};
class Solution {
public:
    
    vector<vector<int>> isPair(vector<int>&nums,int st,int n,int sum)
    {
        unordered_set<int> s;
        set<vector<int>> se;
        vector<vector<int>> res;
        
        for(int i=st;i<n;i++)
        {
            if(s.find(sum-nums[i])!=s.end())
            {
                vector<int> v={sum-nums[i],nums[i],-(sum)};
                
                sort(v.begin(),v.end());
                
                se.insert(v);
                v.clear();
            }
            
            s.insert(nums[i]);
        }
        
        for(auto it:se)
        {
            res.push_back(it);
        }
        
        return res;
    }
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        set<vector<int>> s;
        
        vector<vector<int>> resThreeSum;
        
        for(int i=0;i<nums.size();i++)
        {
            // to avoid duplicates EX: [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,0,]
            if(i==0 || nums[i-1]!=nums[i])
            {
              vector<vector<int>> ans=isPair(nums,i+1,nums.size(),-(nums[i]));
            
                for(auto it:ans)
                {
                    sort(it.begin(),it.end());
                    s.insert(it);
                }
            }
              
        }
        
         for(auto it:s)
        {
            resThreeSum.push_back(it);
        }
        
        
        return resThreeSum;
        
    }
};
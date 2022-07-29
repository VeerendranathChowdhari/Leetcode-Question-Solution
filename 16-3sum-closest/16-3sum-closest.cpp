class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
     
        int n=nums.size(),res=1001;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++)
        {
            int l=i+1,h=nums.size()-1;
            
            while(l<h)
            {
                int sum=nums[i]+nums[l]+nums[h];
                
                if(sum==target)return target;
                
                if(sum>target)
                {
                    if(sum-target < res-target || sum-target < target-res )
                    {
                        res=sum;
                    }
                    h--;
                }
                else{
                    
                    if(target-sum < res-target || target-sum < target-res )
                    {
                        res=sum;
                    }
                    
                    l++;
                }
            }
            
        }
        
        
        return res;
    }
};
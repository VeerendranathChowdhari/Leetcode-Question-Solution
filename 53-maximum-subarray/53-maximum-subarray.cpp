class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        if(nums.size()==0)return 0;
        
        int maxSum=nums[0],res=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            maxSum=max(nums[i],maxSum+nums[i]);
            
            res=max(res,maxSum);
        }
        
        return res;
        
    }
};
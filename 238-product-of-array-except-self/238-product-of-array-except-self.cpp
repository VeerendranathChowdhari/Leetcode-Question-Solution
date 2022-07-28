class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size();
        
        vector<int> res(n),right(n);
        
        right[n-1]=1;
        
        for(int i=n-2;i>=0;i--)
        {
            right[i]=right[i+1]*nums[i+1];
        }
        
        
        int leftPrd=1;
        
        for(int i=0;i<n;i++)
        {
            res[i]=leftPrd*right[i];
            leftPrd*=nums[i];
        }
        
        return res;
    }
};
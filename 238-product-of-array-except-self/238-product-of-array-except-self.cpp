class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
       vector<int> left(nums.size()),right(nums.size()),res(nums.size());
            
        if(nums.size()==0)return left;
        
        if(nums.size()==1)return nums;
        
        left[0]=0;right[nums.size()-1]=0;
        cout<<"check-1"<<endl;
        //Filling Left-Array
        unsigned int prev=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            left[i]=prev;
            prev*=nums[i];
        }
        
        //filling right
        unsigned int prev1=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--)
        {
            right[i]=prev1;
            prev1*=nums[i];
        }
        
        res[0]=right[0];
        res[nums.size()-1]=left[nums.size()-1];
        
        for(int i=1;i<nums.size()-1;i++)
        {
            res[i]=(left[i]*right[i]);
            
        }
        
        return res;
        
    }
};
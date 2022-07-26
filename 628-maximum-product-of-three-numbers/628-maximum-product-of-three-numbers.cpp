class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int res=1,i=nums.size()-1;
        
        if((nums[0]<=0 && nums[nums.size()-1]<=0) || nums.size()==3)
         {
            int j=3;
            while(j--)
            {
              res*=nums[i];
              i--;
            }
            
            return res;
        }
        
        else if( nums[0]*nums[1]*nums[nums.size()-1] >                                                nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3])
        {
            res=(nums[0]*nums[1]*nums[nums.size()-1] );
            
            return res;
        }
        else{
            res=(nums[nums.size()-3]*nums[nums.size()-2]*nums[nums.size()-1]);
            return res;
        }
        
        return res;
    }
};
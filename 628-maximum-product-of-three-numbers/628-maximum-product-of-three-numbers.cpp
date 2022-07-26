class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int res=1,i=nums.size()-1;
        
        int val1= nums[0]*nums[1]*nums[nums.size()-1];
        
        int val2=nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        
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
        
        else if( val1 > val2 )                                            
        {
            return val1;
        }
        else  return val2;
        
    }
};
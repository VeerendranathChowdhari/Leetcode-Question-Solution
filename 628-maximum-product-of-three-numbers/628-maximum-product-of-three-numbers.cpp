class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int res=1,i=nums.size();
        
        int val1= nums[0]*nums[1]*nums[i-1];
        
        int val2=nums[i-1]*nums[i-2]*nums[i-3];
        
        if((nums[0]<=0 && nums[i-1]<=0) || i==3)
         {
            int j=3;
            while(j--)
            {
              i--;
              res*=nums[i];
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
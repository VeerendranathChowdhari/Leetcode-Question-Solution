class Solution {
   public int removeDuplicates(int[] nums) {
    //Because it must have a result,the answer is the head of the nums,such as [1,1,1,1]
    int result = 1;
    //make a faster point,it always larger than head point
    int j = 1;
    for (int i = 0; i < nums.length - 1; i++) {
      //if meet a new number
      if (nums[i] != nums[j]) {
        //update the result,and let it +1
        nums[result] = nums[j];
        result++;
      }
      //whether you find it or not,must update i and j
      j++;
    }
    return result;
  }
}
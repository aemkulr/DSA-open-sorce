import java.util.*;
class Solution {
    public void maxSubArray(int[] nums) {
        int maxEnding = nums[0];
        int res = nums[0];
        for(int i=1;i<nums.length;i++)
        {
            maxEnding = Math.max(maxEnding + nums[i],nums[i]);
            res = Math.max(res,maxEnding);
        }
        System.out.println(res);
    }
  public static void main(Strings args[])
  {
        Solution a = new Solution(); 
        int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 }; 
        int n = arr.length; 
        int sum = 23;
        a.maxSubArray(arr, n, sum); 
  }
}

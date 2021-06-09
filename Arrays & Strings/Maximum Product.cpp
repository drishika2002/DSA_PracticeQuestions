/*https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/*/

class Solution {
public:
    int maxProduct(vector<int>& nums)
    {
        int n = nums.size();
        int m1 = nums[0], index =0;
        for(int i = 1; i < n; i++)
        {
            if(nums[i] > m1)
            {
                m1 = nums[i];
                index = i;
            }
        }
        nums[index] = 0;
        int m2 = nums[0];
        for(int i = 1; i < n; i++)
        {
            m2 = max(nums[i],m2);
        }
        return ((m1-1)*(m2-1));
    }
};

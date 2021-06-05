/*
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4]
*/

class Solution 
{
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> runningSum(n);
        runningSum[0] = nums[0];
        int sum = nums[0];
        
        
        for(int i = 1; i < n; i++)
        {
            sum += nums[i];
            runningSum[i] = sum;
        }
        
        return runningSum;
    }
};

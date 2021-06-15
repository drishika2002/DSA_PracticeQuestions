// https://leetcode.com/problems/contains-duplicate/

class Solution 
{
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i] == nums[i+1])
                return true;
        }
        return false;
    }
};

/*
Time complexity : O(nlogn)
Space complexity : O(1)
*/



/*
APPROACH 1: TLE

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        int n = nums.size();
        
        for(int i=0; i < n; i++)
        {
            for(int j = i+1; j < n;j++)
            {
                if(nums[i] == nums[j])
                {
                    return true;
                }
            }
        }
        return false;   
    }
};

Time complexity : O(n^2)
Space complexity : O(1)
*/

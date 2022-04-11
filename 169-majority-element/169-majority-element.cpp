class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int result = 0, count = 1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[result] == nums[i])
            {
                count++;
            }
            else
            {
                count--;
                if(count == 0)
                {
                    result = i;
                    count = 1;
                }
            }
        }
        return nums[result];
    }
};
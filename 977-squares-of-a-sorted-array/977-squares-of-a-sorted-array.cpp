class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int left = 0, right = nums.size()-1;
        for (int k = nums.size() - 1; k >= 0; k--) 
        {
            if (abs(nums[right]) > abs(nums[left])) 
                res[k] = nums[right] * nums[right--];
            else 
                res[k] = nums[left] * nums[left++];
        }
        return res;
    }
};
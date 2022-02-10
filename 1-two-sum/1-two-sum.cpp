class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //vector<int> answer;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(target-nums[i]) != mpp.end()){
                // answer.push_back(mpp[target-nums[i]]);
                // answer.push_back(i);
                // return answer;
                return {i,mpp[target-nums[i]]};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};
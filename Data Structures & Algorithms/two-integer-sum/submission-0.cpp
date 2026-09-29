class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> result;

        for (int i = 0; i < nums.size(); ++i) {
            int secondNumber = target - nums[i];

            if (result.find(secondNumber) != result.end()) {
                return {result[secondNumber], i};
            }
            
            result[nums[i]] = i;
        }

        return {};
    }
};

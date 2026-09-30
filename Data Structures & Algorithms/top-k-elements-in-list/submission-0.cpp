class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;

        // [1,2,2,3,3,3] 
        for (auto& num : nums) {
            freq[num]++;
        }

        /*
        key     value
        1       1
        2       2
        3       3
        */

        // Now we put the elements from the unordered_map in a vector where the index will
        // be the value so higher the index, higher the frequency of the element in the
        // nums vector

        vector<vector<int>> bucket(nums.size() + 1);

        // We need bucket size to be nums.size() + 1 because,
        // if we have a vector nums = [4,4,4,4] its size is 4 and the frequency is 4
        // so we are trying to place the frequency as index and the actual numbers
        // from nums as value
        // So if we just create a bucket of nums.size() which will be 4 and try to 
        // put the number 4 into the index ( which is frequency ) to be 4 then our
        // vector will be out of bouds and it will be a out of bounds read error

        for (auto& [key,value] : freq) {
            bucket[value].push_back(key);
        }

        vector<int> ans;

        for (int i = nums.size(); i >= 1 && ans.size() < k ; --i) {
            for (int num : bucket[i]) {
                ans.push_back(num);

                if (ans.size() == k) break;
            }
        }

        return ans;
    }
};

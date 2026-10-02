class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> answer;

        int l = 0;
        int r = static_cast<int>(numbers.size() - 1);

        while (l < r) {
            if (numbers[l] + numbers[r] == target) {
                answer.push_back(l+1);
                answer.push_back(r+1);
                break;
            }
            else if (numbers[l] + numbers[r] > target) {
                r--;
            }

            else {
                l++;
            }
        }

        return answer;
    }
};

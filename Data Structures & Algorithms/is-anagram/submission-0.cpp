class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        int freq[26] = {};

        for (const auto& str : s) {
            freq[str - 'a']++;
        }

        for (const auto& str : t) {
            freq[str - 'a']--;
        }

        for (const auto& num : freq) {
            if (num != 0) return false;
        }

        return true;
    }
};

class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;

        // ["Hello", "World"]
        // encoded = 5#Hello5#World

        for (const auto& s : strs) {
            encoded += to_string(s.size());
            encoded += '#';
            encoded += s;
        }
        return encoded;
    }

    // Check the very first letter to determine the length
    // skip the '#' 
    // Read the required length 
    // encoded = 5#Hello5#World

    vector<string> decode(string s) {
        vector<string> answer;

        int i = 0;

        while (i < s.size()) {
            int len = 0;

            while (s[i] != '#') {
                len = len * 10 + (s[i] - '0');
                ++i;
            }

            ++i; // to skip the #
            answer.push_back(s.substr(i, len));
            i += len;
        }
        
        return answer;
    }
};

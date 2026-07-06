// LeetCode 17
// Letter Combinations of a Phone Number
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) {
            return {};
        }
        vector<string> mapping = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        vector<string> result = {""};
        for (int i = 0; i < digits.length(); i++) {
            string letters = mapping[digits[i] - '0'];
            vector<string> temp;
            for (int j = 0; j < result.size(); j++) {
                for (int k = 0; k < letters.length(); k++) {
                    temp.push_back(result[j] + letters[k]);
                }
            }
            result = temp;
        }
        return result;
    }
};

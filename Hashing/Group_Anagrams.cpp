// LeetCode 49
// Group Anagrams
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> anagram;
        for(int i=0;i<strs.size();i++){
            string sorted=strs[i];
            sort(sorted.begin(),sorted.end());
            anagram[sorted].push_back(strs[i]);
        }
        vector<vector<string>>result;
       for (auto pair : anagram) {
            result.push_back(pair.second);
        }
        return result;
    }
};

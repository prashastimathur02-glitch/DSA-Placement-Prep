// LeetCode 1207
// Unique Number of Occurrences
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> count;
        for (int i = 0; i < size(arr); i++) {
            count[arr[i]]++;
        }
        vector<int> frequencies;
        for (auto pair : count) {
            frequencies.push_back(pair.second);
        }
        unordered_map<int, int> freq_of_freq;
        for (int i = 0; i < size(frequencies); i++) {
            int f = frequencies[i];
            freq_of_freq[f]++;
            if (freq_of_freq[f] > 1) {
                return false;
            }
        }
        return true; 
    }
};

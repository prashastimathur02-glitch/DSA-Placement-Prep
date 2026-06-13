// LeetCode 217
// Contains Duplicate
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int i=0;i<size(nums);i++){
            if(seen.contains(nums[i])){
                return true;
            }
            seen.insert(nums[i]);
        }
        return false;
    }
};

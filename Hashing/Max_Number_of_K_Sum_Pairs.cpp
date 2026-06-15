// LeetCode 1679
// Max Number of K-Sum Pairs
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int,int> pairs;
        for(int i=0;i<size(nums);i++){
            int n=k-nums[i];
            if(pairs[n]>0){
              count++;
              pairs[n]--;
            }
            else{
                pairs[nums[i]]++;
            }
        }
        return count;
    }
};

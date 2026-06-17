// LeetCode 1004
// Max Consecutive Ones III
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count=0;
        int left=0;
        int maxlength=0;
        for(int right=0;right<size(nums);right++){
        if(nums[right]==0){
            k--;
        }
        while(k<0){
            if(nums[left]==0){
                k++;
            }
            left++;
        }
        maxlength=max(maxlength,right-left+1);
        }
        return maxlength;

    }

};

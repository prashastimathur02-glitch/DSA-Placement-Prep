// LeetCode 724
// Find Pivot Index
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=size(nums);
        int leftsum=0;
        int totalsum=0;
        for(int i=0;i<n;i++){
            totalsum=totalsum+nums[i];
        }
        for(int i=0;i<nums.size();i++){
            int rightsum=totalsum-leftsum-nums[i];
            if(leftsum==rightsum){
                return i;
            }
            leftsum=leftsum+nums[i];
        }
        return -1;   
    }
};

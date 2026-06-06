// LeetCode 1295
// Find Numbers with Even Number of Digits
class Solution {
public:
    int findNumbers(vector<int>& nums){ 
        int num=0;
        int ans=0;
        for(int i=0;i<size(nums);i++){
            num=nums[i];
            int count=0;
            while(num>0){
                count++;
                num=num/10;
            }
            if(count%2==0){
                ans++;
            };
        }
        return ans;
    }
};

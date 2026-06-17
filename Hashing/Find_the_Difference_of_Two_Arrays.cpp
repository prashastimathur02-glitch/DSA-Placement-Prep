// LeetCode 2215
// Find the Difference of Two Arrays
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       unordered_set<int> set1(nums1.begin(),nums1.end());
       unordered_set<int> set2(nums2.begin(),nums2.end());
       vector<int>dnum1;
       vector<int>dnum2;
       for(int i=0;i<size(nums1);i++){
        if(set2.find(nums1[i])==set2.end()){
            if(find(dnum1.begin(),dnum1.end(),nums1[i])==dnum1.end()){
                dnum1.push_back(nums1[i]);
            }
        }
        }
       for(int i=0;i<size(nums2);i++){
        if(set1.find(nums2[i])==set1.end()){
          if (find(dnum2.begin(),dnum2.end(),nums2[i])==dnum2.end()) {
            dnum2.push_back(nums2[i]);
            }
        }
        }
       return {dnum1,dnum2};

    }
};

// LeetCode 2300
// Successful Pairs of Spells and Potions
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());       
        int n = spells.size();
        int m = potions.size();
        vector<int> pairs(n, 0);
        for (int i=0;i<n;i++){
            int left=0;
            int right=m-1;
            int first_valid_idx=m; 
            while (left<=right){
                int mid=left+(right-left)/ 2;
                if ((long long)spells[i]*potions[mid]>=success){
                    first_valid_idx=mid; 
                    right=mid-1;   
                } 
                else{
                    left=mid+1;        
                }
            } 
            pairs[i]=m-first_valid_idx;
        }  
        return pairs;
    }
};

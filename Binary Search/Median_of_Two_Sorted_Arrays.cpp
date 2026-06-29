// LeetCode 4
// Median of Two Sorted Arrays
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }
        int m = nums1.size();
        int n = nums2.size();
        int low = 0;
        int high = m;
        int total_left = (m + n + 1) / 2;
        while (low <= high) {
            int i = low + (high - low) / 2; 
            int j = total_left - i;         
            int maxLeft1;
            if (i == 0) {
                maxLeft1 = INT_MIN;
            } else {
                maxLeft1 = nums1[i - 1];
            }
            int minRight1;
            if (i == m) {
                minRight1 = INT_MAX;
            } else {
                minRight1 = nums1[i];
            }
            int maxLeft2;
            if (j == 0) {
                maxLeft2 = INT_MIN;
            } else {
                maxLeft2 = nums2[j - 1];
            }
            int minRight2;
            if (j == n) {
                minRight2 = INT_MAX;
            } else {
                minRight2 = nums2[j];
            }
            
            // --- 5. Partition Verification ---
            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                // If total combined elements is odd
                if ((m + n) % 2 != 0) {
                    return max(maxLeft1, maxLeft2);
                }
                // If total combined elements is even
                else {
                    int left_side_max = max(maxLeft1, maxLeft2);
                    int right_side_min = min(minRight1, minRight2);
                    return (left_side_max + right_side_min) / 2.0;
                }
            } 
            // If we are too far right in nums1, narrow search to the left
            else if (maxLeft1 > minRight2) {
                high = i - 1;
            } 
            // If we are too far left in nums1, narrow search to the right
            else {
                low = i + 1;
            }
        }
        
        return 0.0;
    }
};

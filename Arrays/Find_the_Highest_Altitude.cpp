// LeetCode 1732
// Find the Highest Altitude
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current=0;
        int maximum=0;
        for(int i=0;i<size(gain);i++){
            current=current+gain[i];
            maximum=max(current,maximum);
        }
        return maximum;
    }
};

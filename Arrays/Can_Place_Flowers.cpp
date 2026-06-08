// LeetCode 605
// Can Place Flowers
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool value;
        int s=size(flowerbed);
        for(int i=0;i<s;i++){
           if (flowerbed[i] == 0) {
                bool left = (i == 0 || flowerbed[i-1] == 0);
                bool right = (i == s-1 || flowerbed[i+1] == 0);
                if (left && right) {
                    flowerbed[i] = 1;
                    n = n - 1;
                }
            }
        }
        if(n<=0){
            value=true;
        }
        else{
            value=false;
        }
        return value;
    }
};

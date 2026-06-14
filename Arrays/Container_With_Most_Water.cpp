// LeetCode 11
// Container With Most Water
class Solution {
public:
    int maxArea(vector<int>& height) {
       int l=0;
       int r=size(height)-1;
       int m=0;
       while(l<r){
        int h=min(height[l],height[r]);
        int w=r-l;
        int v=w*h;
        m=max(m,v);
        if(height[l]<height[r]){
            l++;
        }
        else{
            r--;
        }
       }
        return m;
        
    }
};

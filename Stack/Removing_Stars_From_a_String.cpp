// LeetCode 2390
// Removing Stars From a String
class Solution {
public:
    string removeStars(string s) {
        string result="";
        for(int i=0;i<size(s);i++){
            if(s[i]=='*'){
                result.pop_back();
            }
            else{
                result.push_back(s[i]);
            }
        }
        return result;
    }
};

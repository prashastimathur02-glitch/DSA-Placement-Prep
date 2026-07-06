// LeetCode 58
// Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0;
        int l=s.length();
        for(int i=l-1;i>=0;i--){
            if(s[i]!=' '){
                length=length+1;
            }
            else{
                if(length!=0){
                    return length;
                }           
            }
        }
        return length;
    }
};

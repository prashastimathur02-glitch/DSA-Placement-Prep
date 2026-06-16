// LeetCode 1456
// Maximum Number of Vowels in a Substring of Given Length
class Solution {
public:
    int maxVowels(string s, int k) {
        int current=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                current++;
            }
        }
        int maxvowvel=current;
        for(int i=k;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                current++;
            }
            char leftchar=s[i-k];
            if(leftchar=='a'||leftchar=='e'||leftchar=='i'||leftchar=='o'||leftchar=='u'){
                current--;
                }
            if(current>maxvowvel){
                maxvowvel=current;
                }
        }
        return maxvowvel;
    }
};

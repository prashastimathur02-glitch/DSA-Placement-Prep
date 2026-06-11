// LeetCode 345
// Reverse Vowels of a String
class Solution {
public:
    string reverseVowels(string s){
    int left =0;
    int right=s.length()-1;
    while(left<=right){
        char l=tolower(s[left]);
        char r=tolower(s[right]);
        bool leftIsVowel = (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u');
        bool rightIsVowel = (r == 'a' || r == 'e' || r == 'i' || r == 'o' || r == 'u');
        if (leftIsVowel && rightIsVowel) {
            swap(s[left], s[right]);
            left++;
            right--;
        } 
        else if (leftIsVowel && !rightIsVowel) {
            right--;
        } 
         else {
            left++;
            }
        }
        return s;
    }
};

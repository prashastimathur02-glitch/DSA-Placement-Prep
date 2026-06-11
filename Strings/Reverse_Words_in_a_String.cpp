// LeetCode 151
// Reverse Words in a String
class Solution {
public:
    string reverseWords(string s) {
        int l=s.length();
        int i=0;
        int j=0;
        while(j<l){
            while(j<l && s[j]==' '){
                j++;
            }
            if(j<l && i>0){
                s[i++]=' ';
            }
            while(j<l && s[j] !=' '){
                s[i++]=s[j++];
            }
        }
        s.resize(i);
        reverse(s.begin(),s.end());
        int start=0;
        for(int end=0;end<=s.length();end++){
            if(end==s.length()||s[end]==' '){
                reverse(s.begin()+start,s.begin()+ end);
                start=end+1;        
            }
        }    
        return s;
    }
};

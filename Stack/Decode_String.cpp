// LeetCode 394
// Decode String
class Solution {
public:
    string decodeString(string s) {
      stack<int>count;
      stack<string> strings;
      string current="";
      int currentk=0;
      for(int i=0;i<s.length();i++){
        if(isdigit(s[i])){
            currentk=currentk*10+(s[i]-'0');
        }
        else if(s[i]=='['){
            count.push(currentk);
            strings.push(current);
            current="";
            currentk=0;
        }
        else if(s[i]==']'){
            int repeat=count.top();
            count.pop();
            string decoded=strings.top();
            strings.pop();
            while(repeat--){
                decoded=decoded+current;
            }
            current=decoded;
        }
        else{
            current=current+s[i];
        }
      }
      return current;  
    }
};

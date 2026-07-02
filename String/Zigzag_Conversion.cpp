// LeetCode 6
// Zigzag Conversion
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1||s.length()<=numRows){
            return s;
        }
        vector<string>rows(min(numRows,(int)s.length()));
        int curRow=0;
        bool goingDown=false;
        for(int i=0;i<s.length();i++){
            rows[curRow]=rows[curRow]+s[i];
            if(curRow==0||curRow==numRows-1){
                goingDown=!goingDown;
            }
            if(goingDown){
                curRow=curRow+1;
            }
            else{
                curRow=curRow-1;
            }
        }
        string result="";
        for(int i=0;i<rows.size();i++){
            result=result+rows[i];
        }
        return result;
    }
};

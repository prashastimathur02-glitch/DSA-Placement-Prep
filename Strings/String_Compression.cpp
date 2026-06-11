// LeetCode 443
// String Compression
class Solution {
public:
    int compress(vector<char>& chars) {
        int read=0;
        int write=0;
        while(read<chars.size()){
            char current=chars[read];
            int count=0;
            while(read<chars.size() && chars[read]==current){
                read++;
                count++;
            }
            chars[write]=current;
            write++;
            if(count>1){
                string countstr=to_string(count);
                for(int i=0;i<countstr.length();i++){
                    chars[write]=countstr[i];
                    write++;
                }
            }
        }
        return write;
    }
};

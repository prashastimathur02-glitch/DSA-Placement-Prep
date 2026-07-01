// LeetCode 29
// Divide Two Integers
class Solution {
public:
    int divide(int dividend, int divisor) {
        int answer;
        if(dividend==INT_MIN && divisor==-1){
           return INT_MAX;
        }
        bool isNegative=(dividend<0)^(divisor<0);
        long long absdividend=abs((long long)dividend);
        long long absdivisor=abs((long long)divisor);
        long long quotient=0;
        while(absdividend>=absdivisor){
            long long tempdivisor=absdivisor;
            long long multiple=1;
            while(absdividend>=tempdivisor<<1){
                tempdivisor<<=1;
                multiple<<=1;
            }
            absdividend=absdividend-tempdivisor;
            quotient=quotient+multiple;
        }
        if(isNegative){
            quotient=-(quotient);
            return quotient;
        }
        else{
            return quotient;
        }
    }
};

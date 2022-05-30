class Solution {
public:
    int divide(int a, int b) {
        long long signal = (a<0 ^ b<0)?-1:1; // Use XOR to determine if a, b is different
                 int shift = 0; // used to record the displacement
        long long dividend = a>0?a:-(long long)a;    
        long long divisor = b>0?b:-(long long)b;
        while(dividend<<shift >= divisor)++shift;    
                 int bits = shift-1; //bits records that the divide is greater than the maximum multiple of the divisor, which is represented by the displacement here.
        long long ans=0;
        while(bits>=0){
                         if(dividend >= divisor<<bits){ // Decrease the amount of displacement in turn, the exact final result
                dividend -= divisor<<bits;
                ans += 1LL<<bits;
            }
            --bits;
        }
        ans *= signal;
                 if(ans<numeric_limits<int>::min() || ans>numeric_limits<int>::max()){ //Judge an overflow
            return numeric_limits<int>::max();
        }
        return ans;
    }
};
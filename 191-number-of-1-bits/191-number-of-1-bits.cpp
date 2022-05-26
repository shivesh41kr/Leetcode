class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;  // count of set bit
        while(n>0){  // iterate until all bits are traversed
			++cnt;
            n=n&(n-1); // change the first set bit from right to 0
        }
        return cnt;
    }
};
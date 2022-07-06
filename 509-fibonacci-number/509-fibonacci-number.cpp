class Solution {
public:
    int helper(int n){
        if(n==0) {
            return 0;
        }
        if(n==1 || n==2){
            return 1;
        }
        return helper(n-1)+helper(n-2);
    };
    int fib(int n) {
      
        return helper(n);
    }
};
class Solution {
public:
    int arr[38]={0};
    int helper(int n){
       if(n==0){
           return 0;
       } 
        if(n==1 || n==2){
            return 1;
        }
        if(n==3){
            return 2;
        }
        if(arr[n]!=0){
            return arr[n];
        }
        
    return arr[n]=helper(n-3)+helper(n-2)+helper(n-1);
    };
    int tribonacci(int n) {
        

     return helper(n);   
    }
};


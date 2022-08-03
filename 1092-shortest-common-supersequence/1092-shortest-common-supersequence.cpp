class Solution {
public:
    string Helper(string &X, string &Y, int m, int n){
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                dp[i][j]=0;
            }
        }
         for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(X[i-1]==Y[j-1]){
                    dp[i][j]= 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
         }
         string str="";
        int i=m,j=n;
      while(i>0 && j>0){
          if(X[i-1]==Y[j-1]){
              str.push_back(X[i-1]);
             i--;
              j--;
          }
          else{
            if(dp[i][j-1] > dp[i-1][j]){
                str.push_back(Y[j-1]);
                j--;
            } 
              else{
                  str.push_back(X[i-1]);
                  i--;
              }
          }
      }
            while(i>0){
                str.push_back(X[i-1]);
                i--;
            }
            while(j>0){
                str.push_back(Y[j-1]);
                j--;
            }
        reverse(str.begin(),str.end());
        return str;
        
    }
    string shortestCommonSupersequence(string str1, string str2) {
        int m=str1.size(), n=str2.size();
        return Helper(str1,str2,m,n);
    }
};
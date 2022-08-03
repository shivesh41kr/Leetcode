class Solution {
public:
    int Helper(string &X, string &Y, int m, int n){
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
         return m-dp[m][n];
    }
    int minInsertions(string s) {
        string s2=s;
        int m=s.size();
        int n=m;
        reverse(s2.begin(),s2.end());
        return Helper(s,s2,m,n);
    }
};
class Solution {
public:
   int dp[1001][1001];
    int Helper(string &text1, string &text2,int m, int n){
        dp[m+1][n+1];
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                dp[i][j]=0;
            }
        }
         for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
        if(text1[i-1]==text2[j-1]){
             dp[i][j]= 1 + dp[i-1][j-1];
        }
                
        else{
             dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
            }
         }
        return dp[m][n];
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size(),n=text2.size();
        return Helper(text1,text2,m,n);
    }
};


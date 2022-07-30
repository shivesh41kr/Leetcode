class Solution {
public:
    long long int countHelper(vector<int>S, int n){
        int m=S.size();
      long long int dp[m+1][n+1];
      for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
              if(j==0){
            dp[i][j]=0;
        } 
            if(i==0){
                dp[i][j]=INT_MAX-1;
            }
          
         }
          }
        for(int i=1;i<=n;i++){
            if(i%S[0]!=0){
                dp[1][i]=INT_MAX-1;
            }
           else{
               dp[1][i]=i/S[0];
           } 
            
        }
          for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(S[i-1]<=j){
                    dp[i][j]=min(dp[i][j-S[i-1]]+1, dp[i-1][j]);
                }
                else {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[m][n];
  }
    int coinChange(vector<int>& coins, int amount) {
        int ans= countHelper(coins,amount);
        if(ans>=1e9){
            return -1;
        }
        return ans;
    }
};
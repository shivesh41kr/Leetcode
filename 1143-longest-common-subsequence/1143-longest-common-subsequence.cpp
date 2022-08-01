class Solution {
public:
   
    int Helper(string &text1, string &text2,int i, int j,int dp[][1001]){
        if(i==0 || j==0){
            return 0;
        }
         if (dp[i][j]!=-1){
             return dp[i][j];
         }
        if(text1[i-1]==text2[j-1]){
            return dp[i][j]= 1 + Helper(text1,text2,i-1,j-1,dp);
        }
        else{
            return dp[i][j] = max(Helper(text1,text2,i-1,j,dp),Helper(text1,text2,i,j-1,dp));
        }
        
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size(),n=text2.size();
         int dp[1000+1][1000+1];
        for(int i=0;i<1001;i++){
            for(int j=0;j<1001;j++){
                dp[i][j]=-1;
            }
        }
        return Helper(text1,text2,m,n,dp);
    }
};


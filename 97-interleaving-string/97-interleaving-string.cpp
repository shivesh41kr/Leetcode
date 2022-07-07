class Solution {
public:
    bool check(string &s1,string &s2,string &s3,int i,int j,int k,vector<vector<int>>&dp){
        if(dp[i][j]!=-1)return dp[i][j];
        if(i==s1.length() and j==s2.length() and k==s3.length())
            return true;
        bool res=false;
        
        if(i!=s1.length())
            if(s1[i]==s3[k])
            res|=check(s1,s2,s3,i+1,j,k+1,dp);
        if(j!=s2.length())
            if(s2[j]==s3[k])
            res|=check(s1,s2,s3,i,j+1,k+1,dp);
        return dp[i][j]=res;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int n=s1.length(),m=s2.length();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        bool ans=check(s1,s2,s3,0,0,0,dp);
        return ans;
    }
};
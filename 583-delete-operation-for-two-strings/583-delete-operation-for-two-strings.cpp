class Solution {
public:
    int minDistance(string word1, string word2) 
    {
        
        int m = word1.size() ;
        int n = word2.size() ;
        
        // dp declaration
        vector<vector<int>> dp(m+1, vector<int>(n+1,0) );
        
        // iterate over the first words
        for(int i=1;i<=m;i++)
        {
            // iterate over the second word
            for(int j=1;j<=n;j++)
            {
                
                // here we check by using by [m-1][n-1] becuse strings are 0 base indexed that's why we go untill <=m or <=n
                // if both string characters are same then this will be the part of our LCS so add 1 and check for next one
                if( word1[i-1] == word2[j-1] )
                    dp[i][j] = 1 + dp[i-1][j-1];
                
                // if not both are same then try to move pointer with respect to other and take maxone
                else 
                    dp[i][j] = max( dp[i-1][j], dp[i][j-1] );
            }
        }
    
        return m+n-(2*dp[m][n]);
    }
};      
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) return 0; // edge case if the size of the string is zero then returing zero as answer
        int flag=0;
        
        vector<int> check(200,-1); // creating a hashtable with vector as it will be used for storing the index of the last occrurence of the element with ASCII as there index where they are updated 

        int n = s.size(),ans=1,j=0;
        // i and j are two pointers where the values are begin updated
        for(int i=0;i<n;i++)
        {
            if(check[s[i]] == -1) // checking if visting that element for the first time if true then just updating the size of the answer and changing the index of the hashtable with the i index of the current element in the string using the ASCII value 
            {
                check[s[i]] = i;
                ans = max(ans,i-j+1);
                
            }
            else if(j <= check[s[i]])
            {
                j = check[s[i]]+1;
                check[s[i]] = i;
        
            }
            else
            {
                check[s[i]] = i;
                ans = max(ans,i-j+1);
            }
        }
        return ans;
    }
};
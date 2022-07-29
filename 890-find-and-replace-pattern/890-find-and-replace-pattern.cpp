class Solution {
public:
    bool helper(string s,string t)
    {
        map<char,char>m;
        for(int i=0;i<s.length();i++)
        {
            if(m.find(s[i])!=m.end())
            {
                if(m[s[i]]!=t[i])
                    return false;
            }
            else
            {
                m[s[i]]=t[i];
            }
        }
        return true;
    }
    bool isIsomorphic(string s,string t)
    {
        return helper(s,t) and helper(t,s);
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(int i=0;i<words.size();i++)
        {
            if(isIsomorphic(words[i],pattern))
            {
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};
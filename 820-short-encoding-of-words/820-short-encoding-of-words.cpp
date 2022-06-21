class Solution 
{
public:
    int minimumLengthEncoding(vector<string>& words) 
    {
        for(auto &word: words) //reverse each word in words i.e. time->emit
            reverse(word.begin(), word.end());
        
        sort(words.begin(), words.end()); //sort words in increasing order of their length
        
        int n = words.size();
        string str = words[0]; 
        int ans=0, wordsize;
        
        //compare adjacent words if both are different we add wordsize+1 in ans, +1 for #
        for(int i=1;i<n;i++) 
        {
            wordsize = str.size();
            if(words[i].compare(0, wordsize, str)) //if both words are same return 0 else 1 
                ans += 1+wordsize;
            str = words[i];
        }
        ans += str.size()+1; //to handle last word and condition when size of words is 1
        return ans;
    }
};
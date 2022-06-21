class Trie
{
    public:
    struct Node
    {
        private:
            Node *child[27];
            int endIdx;
        
        public:
            bool contains(char &ch)
            {                    
                return (child[ch - 'a'] != NULL);
            } 
        
            void putNode(char &ch, Node *newNode)
            {
                child[ch - 'a'] = newNode;
            }
        
            Node *getNext(char &ch)
            {                
                return child[ch - 'a'];
            }
            
            void setIdx(int &i)
            {
                endIdx = i;
            }
        
            int getIdx()
            {
                return endIdx;
            }
    };
    
    Node *root;
    
    public:
    Trie()
    {
        root = new Node();
    }
    
    void insert(string &word, int &idx)
    {
        Node *temp = root;
        
        for(auto &ch : word)
        {
            if(!temp -> contains(ch))
            {
                temp -> putNode(ch, new Node());
            }
            
            temp = temp -> getNext(ch);
            temp -> setIdx(idx);
        }
        
    }
    
    int startsWith(string &word)
    {
        Node *temp = root;
        
        for(auto &ch : word)
        {
            if(!temp -> contains(ch))
            {
                return -1;
            }
            
            temp = temp -> getNext(ch);
        }
        
        return temp -> getIdx();
    }
};

class WordFilter {
    Trie trie;
public:
    WordFilter(vector<string>& words) {
        /*
        
        We are storing word as suffix + '{' + prefix, index 
        why '{' ? you can use any special character, but '{' - 'a' will give 26th index
        so, we don't need to take care of special character.
        
        apple -> suffix + '{' + prefix, i
            apple{apple 0
            pple{apple 0
            ple{apple 0
            le{apple 0
            e{apple 0
            {apple 0


        */
        int len = words.size();
        for(int i = 0; i < len; i++)
        {            
            string str = words[i];
            int n = str.size();
            
            for(int j = 0; j <= n; j++)
            {                
                string cur = str.substr(j) + '{' + str;
                
                trie.insert(cur, i);
            }
        }
    }
    
    int f(string prefix, string suffix) {
        
        string cur = suffix + '{' + prefix;
        
        // just use startswith function and pass suffix + '{' + prefix to find index
        
        return trie.startsWith(cur);
    }
};


/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */
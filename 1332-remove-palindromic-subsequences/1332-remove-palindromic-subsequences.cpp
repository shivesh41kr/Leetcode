class Solution {
public:
    int removePalindromeSub(string s) {
        //TWO POINTER APPROACH
        int x=0;
        int y=s.size()-1;
        while(x<y){
            if(s[x]!=s[y]){
                return 2;
            }
            x++;
                y--;
        }
        return 1;
    }
};
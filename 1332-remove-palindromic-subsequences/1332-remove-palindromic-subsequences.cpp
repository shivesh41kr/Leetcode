class Solution {
public:
    int removePalindromeSub(string s) {
        //TWO POINTER APPROACH
        int x=0;
        int y=s.size()-1;
        while(x<y){
            if(s[x]!=s[y]){
                ///IF S[X] IS NOT = S[Y] MEANS S IS NOT PALLINDROME ATQ S CONTAIN ONLY A & B
                ///FIRST REMOVE A OR B SO STRING GET PALLLINDROME TOTAL OPERATION CURRENT TIME = 1
                ///AFTER THAT 1 OPERATION FOR REMOVING PALLINDROME 
                /// SO IF S PALLINDROME RETURN 1 || IF NOT THEN RETURN 2
                return 2;     
            }
            x++; /// X POINTER MOVE FORWARD
                y--; /// Y POINTER MOVE BACKWARD
        }
        return 1; // IF STRING IS PALLINDROME RETURN 1
    }
};
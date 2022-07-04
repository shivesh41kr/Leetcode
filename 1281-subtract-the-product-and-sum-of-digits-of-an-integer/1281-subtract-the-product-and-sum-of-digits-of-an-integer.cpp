class Solution {
public:
    int subtractProductAndSum(int n) {
        int m=1,s=0;
        string str=to_string(n);
        for(int i=0;i<str.size();i++){
            m*=str[i]-'0';
            s+=str[i]-'0';
        }
        return m-s;
    }
};

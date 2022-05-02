class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& n) {
        int i=0;
        for(int j=0;j<n.size();j++){
            if(n[j]%2==0){
                swap(n[i],n[j]);
                    i++;
            }
        }
        return n;
    }
};
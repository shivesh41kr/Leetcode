class Solution {
public:
    int missingNumber(vector<int>& v) {
    int total=v.size()*(v.size()+1)/2;
        int sum=0;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
        }
        return (total-sum);
    }
};
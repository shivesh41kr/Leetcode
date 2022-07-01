class Solution {
public:
    static bool compare(vector<int>& a, vector<int>& b){
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),compare);
        int ans=0,i=0;
       for(auto run:boxTypes){
           int x=min(truckSize,run[0]);
           ans+=(x*run[1]);
           truckSize-=x;
           if(!truckSize){
               break;
           }
       }
        return ans;
    }
};



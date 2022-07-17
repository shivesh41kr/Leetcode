class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>v;
        long long int i=0,j=0;
        int achieved=false;
        for(i=0;i<n;i++){
           if(achieved==true){
               break;
           }
            for(j=0;j<n;j++){
                if(j==i){
                    continue;
                }
                if(nums[i]+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                   achieved=true;
                }
            }
        }
        return v;
    }
};
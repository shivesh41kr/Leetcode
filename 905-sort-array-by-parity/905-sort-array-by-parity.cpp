class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>v;
        vector<int>v1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                v1.push_back(nums[i]);
            }
            else{
                v.push_back(nums[i]);
            }
        }
        for(int i=0;i<v1.size();i++){
            v.push_back(v1[i]);
        }
        return v;
    }
};
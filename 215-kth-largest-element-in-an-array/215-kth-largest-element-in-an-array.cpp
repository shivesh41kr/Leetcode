class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=0;i--){
            ans=nums[i];
            if(k==1){
                return ans;
            }
            k--;
        }
        return ans;
    }
};
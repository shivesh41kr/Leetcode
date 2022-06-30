class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==1){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int op=nums[n/2];
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=op){
                count+=abs(op-nums[i]);
            }
        }
        return count;
    }
};
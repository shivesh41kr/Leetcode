class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int op=nums[n/2];
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=op){
                count+=abs(op-nums[i]);
            }
        }
        return count;
    }
};
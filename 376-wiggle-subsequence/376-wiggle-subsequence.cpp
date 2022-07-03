class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
       
        if(nums.size()<2)return 1;
        
        int count=1;
        
        int prevDiff=0;
        for(int i=1;i<nums.size();i++){
            int diff = nums[i] - nums[i-1];
            if((diff>0 && prevDiff <= 0) || (diff<0 && prevDiff >= 0)){
			// the equals in prevDiff <= 0 && prevDiff >=0 can only be used at the first iteration, otherwise prevDiff will never be zero afterwards
                count++;
                prevDiff = diff;
            }
        }
        return count;
    
    }
};
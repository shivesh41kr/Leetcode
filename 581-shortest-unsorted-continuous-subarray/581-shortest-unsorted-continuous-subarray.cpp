class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        vector<int> vec;
        vec=nums;
        int low=INT_MAX,high=INT_MIN;
        int n=nums.size();
		
       sort(vec.begin(),vec.end());
	   
        if(vec==nums)
            return 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] != vec[i])
            {
              low=min (low,i);
              high=max (high,i);
            }
        }
		
        return high-low+1;
        
    }
};
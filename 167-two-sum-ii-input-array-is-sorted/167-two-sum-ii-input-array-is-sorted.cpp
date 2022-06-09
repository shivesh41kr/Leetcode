class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sum;
        int run=0;
        vector<int> v;
            for(int i=0;i<numbers.size()-1;i++){
                if(numbers[i]!=numbers[i+1]){
                    run=0;
                }
                if(run!=1){
            for(int j=i+1;j<numbers.size();j++){
                sum=0;
                sum=numbers[i]+numbers[j];
                if(sum==target){
                    v.push_back(i+1);
                    v.push_back(j+1);
                    break;
                }
            }
                    if(numbers[i]==numbers[i+1]){
                run++;
                    }
                
            
            }
            }
        return v;
    }
};
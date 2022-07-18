class Solution {
public:
   int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();
    int m = matrix[0].size();
    
	//calculate the prefix sum of each row
    for(int i=0; i<n; i++){
        for(int j=1; j<m; j++){
            matrix[i][j] += matrix[i][j-1];
        }
    }
    
    int ans = 0;
    unordered_map<int,int> mp;   //to store a already seen sum (its frequency)
    
    for(int j=0; j<m; j++){ // starting column index
        for(int k=j; k<m; k++){  // ending column index 
            mp.clear();  //clear the map to wipe out previous data
            mp = {{0,1}}; //initialize the map
            
            int curr = 0;
            
            for(int i=0; i<n; i++){
                curr += matrix[i][k] - (j > 0 ? matrix[i][j-1] : 0);  // subtact the prefix sum of a[left-1] from a[rught] to find the sum from left to right.
                
                ans += mp.find(curr - target) != mp.end() ? mp[curr - target] : 0; 
                
                mp[curr]++;
            }
        }
    }
    
    return ans;
}
};
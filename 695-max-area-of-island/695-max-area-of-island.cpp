class Solution {
public:
	int dfs(vector<vector<int>>& grid,int i,int j)
	{
	if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size())return 0;
	if(grid[i][j]==2 or grid[i][j]==0)return 0;
	grid[i][j]=2;
return 1+dfs(grid,i+1,j)+dfs(grid,i,j+1)+dfs(grid,i-1,j)+dfs(grid,i,j-1);

	}
	int maxAreaOfIsland(vector<vector<int>>& grid) {

	int max_area=0;
	for(int i=0;i<grid.size();i++)
	{
		for(int j=0;j<grid[0].size();j++)
		{
			if(grid[i][j]==1)
			{
			int count=dfs(grid,i,j);
			max_area=max(max_area,count);
			}
		}
	}
		return max_area;
	}
};
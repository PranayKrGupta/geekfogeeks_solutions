class Solution {
    void dfs(vector<vector<char>> &grid,int i,int j){
        int n=grid.size();
        int m=grid[0].size();
        grid[i][j]='T';
        if(i+1<n && grid[i+1][j]=='O'){
            dfs(grid,i+1,j);
        }
        if(i-1>=0 && grid[i-1][j]=='O'){
            dfs(grid,i-1,j);
        }
        if(j+1<m && grid[i][j+1]=='O'){
            dfs(grid,i,j+1);
        }
        if(j-1>=0 && grid[i][j-1]=='O'){
            dfs(grid,i,j-1);
        }
        
    }
  public:
    void fill(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            if(grid[i][0]=='O'){
                dfs(grid,i,0);
            }
            if(grid[i][m-1]=='O'){
                dfs(grid,i,m-1);
            }
        }
        for(int i=0;i<m;i++){
            if(grid[0][i]=='O'){
                dfs(grid,0,i);
            }
            if(grid[n-1][i]=='O'){
                dfs(grid,n-1,i);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='O'){
                    grid[i][j]='X';
                }
                if(grid[i][j]=='T'){
                    grid[i][j]='O';
                }
            }
        }
    }
};
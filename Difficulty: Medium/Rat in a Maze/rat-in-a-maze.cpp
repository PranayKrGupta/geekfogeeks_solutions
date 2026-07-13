class Solution {
    void solve(vector<vector<int>>& maze,vector<string> &ans,string &s,int n,int i,int j){
        if(i==n-1 && j==n-1){
            ans.push_back(s);
            return;
        }
        
        maze[i][j]=0;
        if(i+1<n && maze[i+1][j]==1){
            s.push_back('D');
            solve(maze,ans,s,n,i+1,j);
            s.pop_back();
        }
        if(j+1<n && maze[i][j+1]==1){
            s.push_back('R');
            solve(maze,ans,s,n,i,j+1);
            s.pop_back();
        }
        if(i-1>=0 && maze[i-1][j]==1){
            s.push_back('U');
            solve(maze,ans,s,n,i-1,j);
            s.pop_back();
        }
        if(j-1>=0 && maze[i][j-1]==1){
            s.push_back('L');
            solve(maze,ans,s,n,i,j-1);
            s.pop_back();
        }
        maze[i][j]=1;
    }
  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        int n=maze.size();
        if(maze[0][0]==0 || maze[n-1][n-1]==0) return {};
        vector<string> ans;
        string s;
        solve(maze,ans,s,n,0,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int V=adj.size();
        vector<int> ans;
        queue<int> q;
        q.push(0);
        vector<bool> visited(V);
        visited[0]=true;
        while(q.size()){
            int n=q.front();
            q.pop();
            ans.push_back(n);
            for(int i:adj[n]){
                if(!visited[i]){
                    q.push(i);
                    visited[i]=true;
                }
            }
        }
        return ans;
    }
};
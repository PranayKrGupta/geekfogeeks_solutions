class Solution {
    bool path(vector<vector<int>> &adj,vector<bool> &vis,int s,int d){
        vis[s]=true;
        for(int i:adj[s]){
            if(!vis[i]){
                if(i==d) return true;
                else if(path(adj,vis,i,d)) return true;
            }
        }
        return false;
    }
  public:
    bool checkPath(int V, vector<vector<int>>& edges, int src, int dest) {
        // Code here
        if(src==dest) return true;
        vector<vector<int>> adj(V);
        for(const auto &v:edges){
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        vector<bool> vis(V);
        return path(adj,vis,src,dest);
    }
};

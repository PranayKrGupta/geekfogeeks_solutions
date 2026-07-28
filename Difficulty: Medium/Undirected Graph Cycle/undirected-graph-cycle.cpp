class Solution {
    bool isCycleBfs(vector<vector<int>> &adj,vector<bool> &vis,int s){
        queue<pair<int,int>>q;
        q.push({s,-1});
        vis[s]=true;
        while(q.size()){
            pair<int,int> p=q.front();
            q.pop();
            int v=p.first;
            int parent=p.second;
            for(int &i:adj[v]){
                if(!vis[i]){
                    vis[i]=true;
                    q.push({i,v});
                }else if(i!=parent){
                    return true;
                }
            }
        }
        return false;
    }
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        for(const auto &v:edges){
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        vector<bool> vis(V);
        for(int i=0;i<V;i++){
            if(!vis[i] && isCycleBfs(adj,vis,i)){
                return true;
            }
        }
        return false;
    }
};
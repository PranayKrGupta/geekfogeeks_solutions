class Solution {
    void dfs(vector<vector<int>> &adj,vector<bool> &vis,stack<int> &st,int u){
        vis[u]=true;
        for(int i:adj[u]){
            if(!vis[i]){
                dfs(adj,vis,st,i);
            }
        }
        st.push(u);
    }
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        for(const auto &v: edges){
            adj[v[0]].push_back(v[1]);
        }
        vector<bool> vis(V);
        stack<int> st;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(adj,vis,st,i);
            }
        }
        vector<int> ans;
        for(int i=0;i<V;i++){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
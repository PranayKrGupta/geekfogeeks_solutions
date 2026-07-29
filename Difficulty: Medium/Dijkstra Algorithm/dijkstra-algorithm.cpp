class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        vector<vector<pair<int,int>>> adj(V);
        for(const auto &v:edges){
            adj[v[0]].push_back({v[1],v[2]});
            adj[v[1]].push_back({v[0],v[2]});
        }
        vector<int> dis(V,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        q.push({0,src});
        dis[src]=0;
        while(q.size()){
            int u=q.top().second;
            int d=q.top().first;
            q.pop();
            if(d>dis[u]){
                continue;
            }
            for(const auto &[neig,w]:adj[u]){
                if(d+w<dis[neig]){
                    dis[neig]=d+w;
                    q.push({d+w,neig});
                }
            }
        }
        return dis;
    }
};
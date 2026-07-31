class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        vector<int> dis(V,1e8);
        dis[src]=0;
        for(int i=0;i<V-1;i++){
            bool updated=false;
            for(const auto & vec:edges){
                int u=vec[0];
                int v=vec[1];
                int w=vec[2];
                if(dis[u]!=1e8 && dis[u]+w<dis[v]){
                    dis[v]=dis[u]+w;
                    updated=true;
                }
            }
            if(!updated) return dis;
        }
        for(const auto & vec:edges){
            int u=vec[0];
            int v=vec[1];
            int w=vec[2];
            if(dis[u]!=1e8 && dis[u]+w<dis[v]){
                return {-1};
            }
        }
        return dis;
    }
};

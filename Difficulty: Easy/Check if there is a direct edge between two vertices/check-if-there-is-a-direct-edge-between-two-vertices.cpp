class Solution {
  public:
    bool checkEdge(vector<vector<int>>& adj, int u, int v) {
        // code here
        for(int i:adj[v]){
            if(i==u) return true;
        }
        return false;
    }
};
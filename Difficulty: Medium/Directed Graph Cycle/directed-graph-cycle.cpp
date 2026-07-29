class Solution {
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>> adj(V);
        vector<int> inD(V);
        for(const auto &v :edges){
            adj[v[0]].push_back(v[1]);
            inD[v[1]]++;
        }
        queue<int> q;
        for(int i=0;i<V;i++){
            if(inD[i]==0){
                q.push(i);
            }
        }
        vector<int> tra;
        while(q.size()){
            int n=q.front();
            q.pop();
            tra.push_back(n);
            for(int i:adj[n]){
                inD[i]--;
                if(inD[i]==0){
                    q.push(i);
                }
            }
        }
        return tra.size()<V;
    }
};
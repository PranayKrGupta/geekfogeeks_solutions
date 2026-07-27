class Solution {
  public:
    int countEdges(vector<vector<int>>& adj) {
        // code here
        int c=0;
        for(const auto &v:adj){
            for(int i:v){
                c++;
            }
        }
        return c/2;
    }
};
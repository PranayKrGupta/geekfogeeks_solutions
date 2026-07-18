class Solution {
  public:
    vector<int> getXor(vector<int>& arr) {
        // code here
        int r=0;
        for(int i:arr){
            r^=i;
        }
        vector<int> ans;
        for(int i:arr){
            ans.push_back(r^i);
        }
        return ans;
    }
};
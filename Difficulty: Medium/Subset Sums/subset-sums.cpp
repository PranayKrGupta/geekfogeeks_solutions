class Solution {
    void solve(const vector<int> &arr,vector<int> &ans,int sum,int idx){
        if(idx==arr.size()){
            ans.push_back(sum);
            return;
        }
        solve(arr,ans,sum,idx+1);
        solve(arr,ans,sum+arr[idx],idx+1);
    }
  public:
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> ans;
        solve(arr,ans,0,0);
        return ans;
    }
};
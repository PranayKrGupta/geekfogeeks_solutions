class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int n=a.size();
        int m=b.size();
        int i=0;
        int j=0;
        vector<int> ans;
        while(i<n && j<m){
            if(a[i]<=b[j])
            ans.push_back(a[i++]);
            else
            ans.push_back(b[j++]);
            while(i<n && ans.back()==a[i]){
                i++;
            }
            while(j<m && ans.back()==b[j]){
                j++;
            }
        }
        while(i<n){
            ans.push_back(a[i++]);
            while(i<n && ans.back()==a[i]){
                i++;
            }
        }
        while(j<m){
            ans.push_back(b[j++]);
            while(j<m && ans.back()==b[j]){
                j++;
            }
        }
        return ans;
    }
};
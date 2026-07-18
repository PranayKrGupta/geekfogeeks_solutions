class Solution {
  public:
    int findMissing(vector<int>& arr1, vector<int>& arr2) {
        // code here
        int ans=0;
        for(int i:arr1){
            ans^=i;
        }
        for(int i:arr2){
            ans^=i;
        }
        return ans;
    }
};
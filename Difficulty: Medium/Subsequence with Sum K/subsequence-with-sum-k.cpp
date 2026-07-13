class Solution {
    bool solve(const vector<int> &arr,int k , int i){
        if(k==0){
            return 1;
        }
        if(k<0 || i==arr.size()){
            return 0;
        }
        return solve(arr,k-arr[i],i+1) || solve(arr,k,i+1);
    }
  public:
    bool checkSubsequenceSum(vector<int>& arr, int k) {
        // Code here
        return solve(arr,k,0);
    }
};
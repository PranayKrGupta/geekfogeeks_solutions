class Solution {
	bool solve(const vector<int> & arr, int sum, int idx) {
		if (sum == 0) {
			return true;
		}
		if (sum<0 || idx == arr.size()) {
			return false;
		}
		return solve(arr, sum-arr[idx], idx + 1) || solve(arr, sum, idx + 1);
	}
	public:
	bool isSubsetSum(vector<int>& arr, int sum) {
		// code here
		return solve(arr,sum,0);
	}
};

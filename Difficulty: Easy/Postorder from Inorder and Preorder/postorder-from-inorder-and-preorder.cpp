class Solution {
	void solve(unordered_map<int, int> &in, vector<int> &pre, vector<int> &post,int &i, int start, int end){
	    if(start>end){
	        return;
	    }
	    int r=pre[i++];
	    int idxr=in[r];
	    solve(in,pre,post,i,start,idxr-1);
	    solve(in,pre,post,i,idxr+1,end);
	    post.push_back(r);
	}
	public:
	vector<int> getPostorder(vector<int> &inorder, vector<int>& preorder) {
		// code here
		vector<int> post;
		int n = inorder.size();
		unordered_map<int, int> in;
		for (int i = 0; i<inorder.size(); i++) {
			in[inorder[i]] = i;
		}
		int i=0;
		solve(in, preorder, post, i,0, n - 1);
		return post;
	}
};

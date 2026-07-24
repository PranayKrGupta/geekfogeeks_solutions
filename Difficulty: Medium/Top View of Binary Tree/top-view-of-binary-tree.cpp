/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        queue<pair<Node*,int>> q;
        q.push({root,0});
        unordered_map<int,int> mp;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                const auto &[n,l] = q.front();
                q.pop();
                if(mp.find(l)==mp.end()){
                    mp[l]=n->data;
                }
                if(n->left != nullptr){
                    q.push({n->left,l-1});
                }
                if(n->right != nullptr){
                    q.push({n->right,l+1});
                }
            }
        }
        vector<pair<int,int>> arr;
        for(const auto & [i,v]:mp){
            arr.push_back({i,v});
        }
        sort(arr.begin(),arr.end());
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};
/* Structure of binary tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;
    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};*/
class Solution {
    
  public:
    vector<int> nodesAtOddLevels(Node *root) {
        // code here
        vector<int> ans;
        queue<Node *> q;
        int c=1;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                if(c&1)
                ans.push_back(q.front()->data);
                if(q.front()->left!=nullptr){
                    q.push(q.front()->left);
                }
                if(q.front()->right!=nullptr){
                    q.push(q.front()->right);
                }
                q.pop();
            }c++;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
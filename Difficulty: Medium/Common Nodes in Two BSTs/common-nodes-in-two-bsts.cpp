/* Structure for a Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
    void lefter(Node *r,stack<Node *> &st){
        while(r){
            st.push(r);
            r=r->left;
        }
    }
  public:
    vector<int> findCommon(Node* r1, Node* r2) {
        // code here
        stack<Node *> st1,st2;
        lefter(r1,st1);
        lefter(r2,st2);
        vector<int> ans;
        while(!st1.empty() && !st2.empty()){
            if(st1.top()->data==st2.top()->data){
                ans.push_back(st1.top()->data);
                Node *n1=st1.top();
                Node *n2=st2.top();
                st1.pop();
                st2.pop();
                lefter(n1->right,st1);
                lefter(n2->right,st2);
            }else if(st1.top()->data<st2.top()->data){
                Node *n1=st1.top();
                st1.pop();
                lefter(n1->right,st1);
            }else{
                Node *n2=st2.top();
                st2.pop();
                lefter(n2->right,st2);
            }
        }
        return ans;
    }
};
/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
    void lefter(Node *r,stack<Node *> &st){
        while(r){
            st.push(r);
            r=r->left;
        }
    }
    void righter(Node *r,stack<Node *> &st){
        while(r){
            st.push(r);
            r=r->right;
        }
    }
  public:
    int countPairs(Node* root1, Node* root2, int x) {
        // code here
        stack<Node *> st1;
        stack<Node *>st2;
        lefter(root1,st1);
        righter(root2,st2);
        int c=0;
        while(!st1.empty() && !st2.empty()){
            int sum=st1.top()->data+st2.top()->data;
            if(sum==x){
                Node *n1=st1.top();
                Node *n2=st2.top();
                st1.pop();
                st2.pop();
                lefter(n1->right,st1);
                righter(n2->left,st2);
                c++;
            }else if(sum<x){
                Node *n1=st1.top();
                st1.pop();
                lefter(n1->right,st1);
            }else{
                Node *n2=st2.top();
                st2.pop();
                righter(n2->left,st2);
            }
        }
        return c;
    }
};
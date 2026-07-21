class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int> q;
        for(int i:arr){
            q.push(i);
            if(q.size()>k) q.pop();
        }
        return q.top();
    }
};
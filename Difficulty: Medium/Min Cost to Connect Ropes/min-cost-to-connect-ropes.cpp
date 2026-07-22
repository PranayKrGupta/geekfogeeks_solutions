class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        int sum=0;
        priority_queue<int,vector<int>,greater<int>> q;
        for(int i:arr){
            q.push(i);
        }
        while(q.size()!=1){
            int a=q.top();
            q.pop();
            int b=q.top();
            q.pop();
            q.push(a+b);
            sum+=a+b;
        }
        return sum;
    }
};
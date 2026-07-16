class Solution {
  public:
    int replaceBit(int n, int k) {
        // code here
        int temp=n;
        int c=0;
        
        while(temp){
            temp>>=1;
            c++;
        }
        
        if(k>c) return n;
        
        return ~(1<<(c-k))&n;
    }
};
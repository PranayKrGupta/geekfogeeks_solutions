class Solution {
  public:
    bool isSparse(int n) {
        // code here
        int f=0;
        while(n){
            if((n&1) && f==1) return false;
            else if((n&1) && f==0) f=1;
            else{
                f=0;
            }
            n>>=1;
        }
        return true;
    }
};
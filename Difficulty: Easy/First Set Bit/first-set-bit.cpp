class Solution {
  public:
    int getFirstSetBit(int n) {
        // code here
        int i=0;
        while(n){
            i++;
            if(n&1) {
                break;
            }
            n>>=1;
        }
        return i;
    }
};
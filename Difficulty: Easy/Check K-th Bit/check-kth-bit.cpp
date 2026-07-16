class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        if(k==31) return 0;
        int i=1;
        i<<=k;
        return n&i;
    }
};
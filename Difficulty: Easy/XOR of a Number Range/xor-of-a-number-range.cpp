class Solution {
    int xor1toN(int n){
        int m=n%4;
        switch(m){
            case 0 : return n;
            case 1 : return 1;
            case 2:return n+1;
            case 3:return 0;
        }
        return 0;
    }
  public:
    int findXOR(int l, int r) {
        // code here
        int rx=xor1toN(r);
        int lx=xor1toN(l-1);
        return rx^lx;
    }
};
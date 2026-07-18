class Solution {
  public:
    int posOfRightMostDiffBit(int m, int n) {
        //  code here
        // 1011
        // 1110
        int i=0;
        int a=m^n;
        while(a){
            i++;
            if(a&1){
                break;
            }
            a>>=1;
        }
        return (i==0)?-1:i;
    }
};
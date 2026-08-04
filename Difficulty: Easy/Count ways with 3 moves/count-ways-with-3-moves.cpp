
class Solution {
  public:
    int countWays(int n) {
        // your code here
        if(n<=2) return n;
        if(n==3) return 4;
        int a=1;
        int b=2;
        int c=4;
        int d=-1;
        for(int i=4;i<=n;i++){
            d=a+b+c;
            a=b;
            b=c;
            c=d;
        }
        return d;
    }
};

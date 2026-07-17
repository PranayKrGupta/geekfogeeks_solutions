class Solution {
  public:
    int countBitsFlip(int a, int b) {
        // code here
        int n=a^b;
        int c=0;
        while(n){
            n&=n-1;
            c++;
        }
        return c;
    }
};
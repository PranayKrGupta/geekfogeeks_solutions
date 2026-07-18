class Solution {
  public:
    int maxConsecutiveOnes(int n) {
        // code here
        int c=0;
        int maxl=0;
        while(n){
            if(n%2==1){
                c++;
            }else{
                c=0;
            }
            maxl=max(c,maxl);
            n/=2;
        }
        return maxl;
    }
};

class Solution {
    long long sumDiv(long long n){
        long long s=0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                s+=i+(n/i);
            }
        }
        int sqr=sqrt(n);
        if(sqr*sqr==n){
            s-=sqr;
        }
        return s;
    }
  public:
    long long sumOfDivisors(long long n) {
        // Code here
        long long s=0;
        for(int i=1;i<=n;i++){
            s+=sumDiv(i);
        }
        return s;
    }
};
class Solution {
  public:
    void bitManipulation(int num, int i) {
        // your code here
        i--;
        cout<< ((num>>i)&1 )<<" "<< (num|(1ll<<i))<<" "<<(num&~(1ll<<i));
    }
};
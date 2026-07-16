class Solution {
  public:
    int getOddOccurrence(vector<int>& nums) {
        // code here
        int n=nums[0];
        for(int i=1;i<nums.size();i++){
            n^=nums[i];
        }
        return n;
    }
};
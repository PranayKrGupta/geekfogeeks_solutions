class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        int start=*min_element(arr.begin(),arr.end());
        int end=*max_element(arr.begin(),arr.end());
        while(start<=end){
            int mid=start+(end-start)/2;
            int countless=0;
            int countequal=0;
            for(int i:arr){
                if(i<mid)countless++;
                else if(i==mid)countequal++;
            }
            if(countless<k && countless+countequal>=k) return mid;
            else if(countless>=k) end=mid-1;
            else if(countless<k && countless+countequal<k) start=mid+1;
        }
        return -1;
    }
};
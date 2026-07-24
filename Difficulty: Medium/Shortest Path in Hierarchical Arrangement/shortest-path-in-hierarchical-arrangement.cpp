class Solution {
  public:
    int shortestPath(int x, int y) {
        // code here
        int c=0;
        while(x!=y){
            if(x>y)
            x=(x)/2;
            else if(y>x)
            y=(y)/2;
            c++;
        }
        return c;
    }
};
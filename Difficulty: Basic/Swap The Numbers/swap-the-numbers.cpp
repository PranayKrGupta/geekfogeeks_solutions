void swap(int &a, int &b) {
    // code here
    if(a==b) return;
    a=a^b;
    b=a^b;
    a=a^b;
}

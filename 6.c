bool isPowerOfTwo(int n) {
    if(n==1)
    return 1;
    if(n<1)
        return 0;
    return (n%2==0) && isPowerOfTwo(n/2);

    
}
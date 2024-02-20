double myPow(double x, int n) 
{
        long long int n1=n;

        if(n1==0){
            return 1;
        }
        if (n1 < 0) { 
            n1 = -n1;
            x = 1/x;
        }
        if(n1%2==0){
            return myPow(x*x,n1/2);
        
        }else{
            return x*myPow(x*x,n1/2);
        }
}

int fib(int n){
     if(n==0) return 0;
     if(n==1) return 1;
     int n1 =0 ;
     int n2 =1;
     int result =0;
     for(int i=2;i<=n;i++){
         result = n1+n2 ;
         n1 = n2;
         n2 = result;
     }
     return result;
}
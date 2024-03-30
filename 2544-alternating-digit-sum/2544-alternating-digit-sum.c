int alternateDigitSum(int n) {
    int count = 0,num=n,sum=0;
    while(num>0)
    {
        num/=10;
        count++;
    }
    if(count%2!=0){
        n *= (-1);
    }
    while(n!=0)
    {
        n*=(-1);
        sum+=(n%10);
        n/=10;
    }
    return sum;
    
}
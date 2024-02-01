int reverse(int x){
    long reans = 0;
    while(x !=0){
        int digit = x%10;
        // printf("%d\n",INT_MAX);
        // printf("%d",INT_MIN);
        if(reans>INT_MAX/10 || reans<INT_MIN/10){
            return 0;
        }
        reans = (reans *10)+digit;
        x/=10;
    }
    return reans;
}
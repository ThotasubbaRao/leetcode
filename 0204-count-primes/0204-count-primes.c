int countPrimes(int n) {
    if (n <= 2) {
        return 0;
    }
    bool not_prime[n];
    for (int i = 2; i < n; i++) {
        not_prime[i] = false;
    }
    int count =0;
    for (int a= 2; a < n; a++) {
        if (not_prime[a] == false) {
            count++;
            for (int i = 2; i*a < n; i++) {
                not_prime[i*a] = true;
            }
        }
    }
    return count;
}
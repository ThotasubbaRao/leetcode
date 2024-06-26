int firstUniqChar(char* s) {
    int n=strlen(s);
    if(n==0){
        return -1;
    }
    int charCo[256] = {0}; 
    for (int i=0; i < n; i++) {
        charCo[s[i]]++;
    }

    for (int i=0; i<n; i++) {
        if (charCo[s[i]] == 1) {
            return i;
        }
    }
    return -1;
}
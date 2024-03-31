
char* longestPalindrome(char* s) {
   int n = strlen(s);
    if (n == 0) return "";

    int start = 0, maxLength = 1;

    bool table[n][n];
    memset(table, false, sizeof(table));

    
    for (int i = 0; i < n; ++i) {
        table[i][i] = true;
    }

   
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == s[i + 1]) {
            table[i][i + 1] = true;
            start = i;
            maxLength = 2;
        }
    }

   
    for (int k = 3; k <= n; ++k) {
        for (int i = 0; i < n - k + 1; ++i) {
            int j = i + k - 1;

            if (table[i + 1][j - 1] && s[i] == s[j]) {
                table[i][j] = true;

                if (k > maxLength) {
                    start = i;
                    maxLength = k;
                }
            }
        }
    }

  
    char* result = (char*)malloc((maxLength + 1) * sizeof(char));
    strncpy(result, s + start, maxLength);
    result[maxLength] = '\0'; 
    return result;
}
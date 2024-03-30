int prefixCount(char** words, int wordsSize, char* pref) {
    int count = 0;
    for (int i = 0; i < wordsSize; i++) {
        bool check = true;
        int prefixLen = strlen(pref);
        if (prefixLen <= strlen(words[i])) {
            for (int j = 0; j < prefixLen; j++) {
                if (words[i][j] != pref[j]) {
                    check = false;
                    break;
                }
            }
            if (check) {
                count++;
            }
        }
    }
    return count;
}
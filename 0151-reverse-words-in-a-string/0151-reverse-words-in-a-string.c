char* reverseWords(char* s) {
    char* newStr = malloc(strlen(s) + 1);
    char* New = malloc(strlen(s) + 1);
    int count = 0;
    newStr[0] = '\0';
    New[0] = '\0';
    for (int i = strlen(s) - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            if (count > 0) {
                strcat(newStr, " ");
                count = 0;
            }
            memmove(New + 1, New, strlen(New) + 1);
            New[0] = s[i];
        } else {
            strcat(newStr, New);
            New[0] = '\0';
            count++;
        }
    }
    strcat(newStr, New);
    free(New);
    int leading_spaces = 0;
    while (newStr[leading_spaces] == ' ') {
        leading_spaces++;
    }
    if (leading_spaces > 0) {
        memmove(newStr, newStr + leading_spaces, strlen(newStr) - leading_spaces + 1);
    }
    return newStr;
}
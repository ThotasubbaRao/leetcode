char* reverseStr(char* s, int k) {
    int length = strlen(s);
    for (int i = 0; i < length; i += 2 * k) {
       
        if (i + k <= length) {
            reverse(s, i, i + k - 1);
        } else { 
            reverse(s, i, length - 1);
        }
    }
    return s;
}
void reverse(char* s, int left, int right) {
    while (left < right) {
        char temp = s[left];
        s[left++] = s[right];
        s[right--] = temp;
    }
}
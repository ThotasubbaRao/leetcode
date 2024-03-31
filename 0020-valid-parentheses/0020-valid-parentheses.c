bool isValid(char* s) {
     int len = strlen(s);
    if (len == 0)
        return true;
    char stack[len];
    int top = -1;
    for (int i = 0; i < len; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            
            stack[++top] = s[i];
        } else {
            
            if (top == -1 || (s[i] == ')' && stack[top] != '(') ||
                (s[i] == ']' && stack[top] != '[') ||
                (s[i] == '}' && stack[top] != '{')) {
                return false;
            } else {
                
                top--;
            }
        }
    }

    
    return (top == -1);
}
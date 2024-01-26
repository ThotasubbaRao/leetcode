bool isPalindrome(char* s) {
    int a =0,b= strlen(s)-1;
    while(a < b){
        while(a < b && !isalnum(s[a])){
            a++;
        }
        while(a < b && !isalnum(s[b])){
            b--;
        }
        if(tolower(s[a++]) != tolower(s[b--])){
            
            return false;
        }
    }
    return true;
}
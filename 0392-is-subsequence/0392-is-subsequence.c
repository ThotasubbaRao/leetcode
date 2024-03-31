bool isSubsequence(char* s, char* t) {
    int count =0;
    for( int i=0;i< strlen(t);i++){
        if(s[count] == t[i]){
            count ++;
        }
    }
    return count == strlen(s);
}
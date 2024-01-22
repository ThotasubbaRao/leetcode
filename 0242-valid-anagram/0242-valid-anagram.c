bool isAnagram(char* s, char* t) {
    int len1 = strlen(s);
    int len2 = strlen(t);

    int w1array[26] = {0};
    int w2array[26] = {0};

    for(int i=0;i<len1 ;i++){
        int lower = tolower(s[i]);
        w1array[lower - 'a']++;
         
    }

    for(int i=0;i<len2 ;i++){
        int lower = tolower(t[i]);
        w2array[lower - 'a']++;
    }
    
    for(int i=0;i<26;i++){
       
        if(w1array[i] != w2array[i]){
           return false;
        } 
    }
    return true;
}
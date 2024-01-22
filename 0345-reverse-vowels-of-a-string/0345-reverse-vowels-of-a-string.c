char* reverseVowels(char* s) {
    char vowels[] = "aeiouAEIOU";
    

  int l = 0, r = strlen(s) - 1;
  while (l < r)
  {
    bool con = true;
    if (strchr(vowels, s[l]) == NULL)
    {
      
      l++;
      
      con = false;
    }
    if (strchr(vowels, s[r]) == NULL)
    {
      
      r--;
      
      con= false;
    }

    if (!con)
      continue;

    char temp = s[l];
    s[l] = s[r];
    s[r] = temp;

    l++;
    r--;
    }
    return s;
}
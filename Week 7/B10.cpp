void rFilter(char *s) {
    // Your code goes here
    int n = strlen(s);
    n--;
    while(!isalpha(s[n])){
        s[n]='_';
        n--;
    }
    //*(s) = '_';
    //*(s + 1) = '\0';
}
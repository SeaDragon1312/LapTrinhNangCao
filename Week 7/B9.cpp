void reverse(char *s) {
    // Your code goes here
    int n = strlen(s);
    for(int i=0; i<n/2; i++){
        swap(s[i], s[n-1-i]);
    }
    //s[n]='\0';
    //*(s) = 's';
    //*(s + 1) = '\0';
}
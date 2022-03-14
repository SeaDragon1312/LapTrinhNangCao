string pigLatin(string word)
{
    char c=word[0];
    if(c=='u'||c=='e'||c=='o'||c=='a'||c=='i'){
        word+="way";
    }
    else{
        for(int i=0; i<=word.size()-2; i++){
            word[i]=word[i+1];
        }
        word[word.size()-1]=c;
        word+="ay";
    }
    return word;
}

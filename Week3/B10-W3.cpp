#include <iostream>
using namespace std;
int checkLong(string s){
    if(s.size()>=6&&s.size()<=15){
        return 1;
    }
    return 0;
}
int checkFirst(string s){
    if(isdigit(s[0])) return 0;
    return 1;
}
int checkTrue(string s){
    for(int i=0; i<s.size(); i++){
        if(!isalnum(s[i])) return 0;
    }
    return 1;
}

int main()
{
    string s;
    cin>>s;
    if(!checkLong(s)){
        cout<<"Invalid username.";
        return 0;
    }
    if(!checkFirst(s)){
        cout<<"Invalid username.";
        return 0;
    }
    if(!checkTrue(s)){
        cout<<"Invalid username.";
        return 0;
    }
    cout<<"Valid username.";
    return 0;
}
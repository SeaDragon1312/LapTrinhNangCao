#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int countStartSpaces = 0;
    if(s[0]==' '){
        while(s[countStartSpaces]==' '){
            countStartSpaces++;
        }
    }
    int n=countStartSpaces;
    while(countStartSpaces--){
        cout<<' ';
    }
    for(int i=n; i<s.size(); i++){
        if(s[i]!=' '){
            cout<<s[i];
        }
        else{
            cout<<' ';
            while(s[i]==' '){
                i++;
            }
            i--;
        }
    }
    return 0;
}
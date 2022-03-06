#include <iostream>
using namespace std;
int main()
{
    string s;
    int count=0;
    getline(cin, s);
    if(s[0]!=' ') count++;
    for(int i=1; i<s.length(); i++){
        if(s[i]!=' '&&s[i-1]==' ') count++;
    }
    cout<<count;
    return 0;
}
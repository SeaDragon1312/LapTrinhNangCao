#include <iostream>
using namespace std;
int main()
{
    string s;
    int al=0, di=0, ot=0;
    getline(cin, s);
    for(int i=0; i<s.size(); i++){
        if(isalpha(s[i])) al++;
        else if(isdigit(s[i])) di++;
        else ot++;
    }
    cout<<al<<' '<<di<<' '<<ot;
}
#include <iostream>
using namespace std;
int main()
{
    long long n;
    int cnt=0;
    cin>>n;
    do{
        n=n/10;
        cnt++;
    }while(n!=0);
    cout<<cnt;
    return 0;
}
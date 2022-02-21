#include <iostream>
using namespace std;
int f(long long a, long long b, long long c){
    a=(a*(a+1)/2)%998244353;
    b=(b*(b+1)/2)%998244353;
    c=(c*(c+1)/2)%998244353;
    a=(a*b*c)%998244353;
    return a;
}
int main()
{
    int t; long long a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        cout<<f(a,b,c)<<endl;
    }
    return 0;
}

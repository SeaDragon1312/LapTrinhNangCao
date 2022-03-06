#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    cout<<fixed<<setprecision(2);
    int n;
    cin>>n;
    double a[n+1];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>a[n];
    sort(a, a+n+1);
    for(int i=0; i<=n; i++){
        cout<<a[i]<<' ';
    }
    return 0;
}
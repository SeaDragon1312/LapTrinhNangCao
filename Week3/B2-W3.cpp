#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    cout<<fixed<<setprecision(2);
    int n;
    cin>>n;
    double a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n, greater<double>());
    for(int i=0; i<n; i++){
        cout<<a[i]<<' ';
    }
    return 0;
}
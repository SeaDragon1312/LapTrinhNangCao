#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int MAX_N=1000;
    int n;
    cin>>n; cout<<fixed<<setprecision(2);
    double a[MAX_N];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=n-1; i>=0; i--){
        cout<<a[i]<<' ';
    }
    return 0;
}
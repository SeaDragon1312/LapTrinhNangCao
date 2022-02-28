#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int MAX_N=1000;
    int n;
    cin>>n;
    double a[MAX_N], b[MAX_N], result = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    for(int i=0; i<n; i++){
        result+=a[i]*b[i];
    }
    cout<<fixed<<setprecision(2)<<result;
    return 0;
}
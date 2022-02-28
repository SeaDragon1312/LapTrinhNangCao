#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int MAX_N=1000;
    int n;
    cin>>n;
    double a[MAX_N];
    double sum=0, result=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    double tb=sum/n;
    for(int i=0; i<n; i++){
        result+=(a[i]-tb)*(a[i]-tb);
    }
    cout<<fixed<<setprecision(2)<<result/n;
    return 0;
}
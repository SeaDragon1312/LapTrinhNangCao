#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    double p = (a+b+c)*1.0/2;
    if(a+b>c&&b+c>a&&c+a>b){
        double s=sqrt(p*(p-a)*(p-b)*(p-c)*1.0);
        cout<<fixed<<setprecision(2)<<s;
    }
    else{
        cout<<"invalid";
    }
    return 0;
}

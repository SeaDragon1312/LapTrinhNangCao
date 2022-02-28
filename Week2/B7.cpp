#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x, i=1;
    cin>>x;
    double sum=1, oldSum=0, temp=1;
    while(sum-oldSum>0.001){
        oldSum=sum;
        temp*=(x*1.0/i);
        sum+=temp;
        i++;
    }
    cout<<fixed<<setprecision(4)<<sum;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int low, up;
    cin>>low>>up;
    int low1 = sqrt(low);
    if(low1*low1!=low) low1++;
    while(low1*low1<=up){
        cout<<low1*low1<<' ';
        low1++;
    }
    return 0;
}
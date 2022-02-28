#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=0; i<=a; i++) {
        for(int j=0; j<=a; j++){
            if (i+j==a&&2*i+4*j==b){
                cout << "chicken = "<<i<<","<<" dog = "<<j<<endl;

            return 0;
    }
        }
    }
    cout <<"invalid";
return 0;
}
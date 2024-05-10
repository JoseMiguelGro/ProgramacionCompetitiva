#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double r,x;
    cin>>r;
    cout<<fixed<<setprecision(6)<<r<<endl;
    x=r+5;
    cout<<fixed<<setprecision(6)<<x<<endl;
    x=pow(x,2);
    cout<<fixed<<setprecision(6)<<x<<endl;
    x/=(r/3);
    cout<<fixed<<setprecision(6)<<x<<endl;
    x=pow(x,3);
    cout<<fixed<<setprecision(6)<<x<<endl;
    return 0;
}
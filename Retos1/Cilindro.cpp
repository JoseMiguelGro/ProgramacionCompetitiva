#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double  r, h,volumen,area;
    double const pi=3.1416;
    cin>>r>>h;
    area=2*pi*r*h+2*pi*pow(r,2);
    volumen=pi*pow(r,2)*h;
    cout<<fixed<<setprecision(2)<<"AREA="<<area<<endl;
    cout<<fixed<<setprecision(2)<<"VOLUMEN="<<volumen<<endl;
    return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double ca,co,h;
    cin>>ca;
    cin>>co;
    h=sqrt(pow(ca,2)+pow(co,2));
    cout<<fixed<<setprecision(2)<<h;
    return 0;
}
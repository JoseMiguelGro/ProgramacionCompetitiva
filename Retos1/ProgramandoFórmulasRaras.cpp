#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double const pi=3.1416;
    double x,y,z,total;
    cin>>x>>y>>z;
    total=(x+x*(y+pow(z,2)))/((x+pi)*(y+pi));\
    cout<<fixed<<setprecision(6)<<total;
    return 0;
}
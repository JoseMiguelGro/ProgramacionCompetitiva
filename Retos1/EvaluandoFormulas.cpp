#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double x,y,z,total;
    cin>>x>>y>>z;
    total=(((2*x+y)/z)*(pow(y,3)-z)/((x+2*y+3*z)/((z-2*y-3*x))+pow(x,2)+pow(z,2)));
    cout<<fixed<<setprecision(6)<<total;
    return 0;
}
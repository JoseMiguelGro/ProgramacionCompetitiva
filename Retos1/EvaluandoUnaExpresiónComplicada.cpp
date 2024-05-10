#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double x,y,z,total;
    cin>>x>>y>>z;
    total=(pow((2*y+z),2.8)-z)/(x+y-(x/z));
    cout<<fixed<<setprecision(6)<<total;
    return 0;
}
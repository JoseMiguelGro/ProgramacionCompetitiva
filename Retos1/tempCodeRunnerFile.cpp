#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12,total;
    cin>>m1>>m2>>m3>>m4>>m5>>m6>>m7>>m8>>m9>>m10>>m11>>m12;
    total=round((m1+m2+m3+m4+m5+m6+m7+m8+m9+m10+m11+m12)/12);
    cout<<fixed<<setprecision(2)<<"$"<<total;
    return 0;
}
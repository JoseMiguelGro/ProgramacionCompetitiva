#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double x,total;
    cin>>x;
    total=((((x+pow(x,2))/(5*x+3))+x)*(((x+pow(x,2))/((5*x+3)))/(((x+pow(x,2))/(5*x+3))+2*x)));
    cout<<fixed<<setprecision(6)<<total;
    return 0;
}
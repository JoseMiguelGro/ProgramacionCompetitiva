#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double const pi=3.1416;
    double n1,total;
    cin>>n1;
    total=(pi*pow(n1,2));
    cout<<fixed<<setprecision(2)<<"El radio es: "<<total<<endl;
    return 0;
}

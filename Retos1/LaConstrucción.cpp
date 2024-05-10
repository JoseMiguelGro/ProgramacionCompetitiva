#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n,m;
    float total;
    cin>>n>>m;
    total=(float(1500)/(300*n)*m);
    cout<<fixed<<setprecision(1)<<total<<" horas.";
    return 0;
}
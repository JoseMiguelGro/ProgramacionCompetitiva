#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int x;
    float n1,n2,n3,banco,inv1,inv2,inv3,total,final;
    cin>>x>>n1>>n2>>n3>>banco;
    inv1=(x/3)*n1*12;
    inv2=(x/3)*n2*12;
    inv3=(x/3)*n3*12;
    total=inv1+inv2+inv3;
    final=x+total-(total*banco);
    cout<<fixed<<setprecision(3)<<final;
    return 0;    
}
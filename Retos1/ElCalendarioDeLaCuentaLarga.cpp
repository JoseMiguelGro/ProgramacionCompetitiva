#include <iostream>
using namespace std;
int main(){
    int fecha,b,k,t,u,d;
    cin>>fecha;
    d=fecha%20;
    fecha/=20;
    u=fecha%18;
    fecha/=18;
    t=fecha%20;
    fecha/=20;
    k=fecha%20;
    fecha/=20;
    b=fecha;
    cout<<b<<" "<<k<<" "<<t<<" "<<u<<" "<<d;
    return 0;
}
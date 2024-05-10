#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(z>=x and z<=y)
        cout<<"INTERVALO";
    else
    {
        if(z>y)
            cout<<"DERECHA";
        else
            cout<<"IZQUIERDA";
    }
    return 0;
}
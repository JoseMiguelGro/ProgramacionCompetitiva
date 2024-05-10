#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    if(x>=0)
    {
        if(y>=0)
            cout<<"1er cuadrante";
        else
            cout<<"4to cuadrante";
    }else
    {
        if(y>=0)
            cout<<"2do cuadrante";
        else
            cout<<"3er cuadrante";
    }
    return 0;
}
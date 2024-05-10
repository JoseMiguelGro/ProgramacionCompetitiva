#include <iostream>
using namespace std;
int main(){
    int n,n1,n2,n3;
    cin>>n>>n1>>n2>>n3;
    if (n>n1)
        cout<<"Soy Mejor"<<endl;
    else if (n==n1)
        cout<<"Te gano en la siguiente"<<endl;
    else
        cout<<"Shh"<<endl;
    if (n>n2)
        cout<<"Soy Mejor"<<endl;
    else if (n==n2)
        cout<<"Te gano en la siguiente"<<endl;
    else
        cout<<"Shh"<<endl;
    if (n>n3)
        cout<<"Soy Mejor"<<endl;
    else if (n==n3)
        cout<<"Te gano en la siguiente"<<endl;
    else
        cout<<"Shh"<<endl;
    return 0;
}
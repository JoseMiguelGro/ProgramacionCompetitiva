#include <iostream>
using namespace std;
int main(){
    int n,blanco,gris;
    cin>>n;
    gris=n*2+(n-2)*3+(n -3);
    blanco=n*n-gris;
    cout<<blanco<<" "<<gris;
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int datos[n];
    for (int i = 0; i < n; i++)
    {
        cin>>datos[i];
    }
    sort(datos,datos+n,greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout<<datos[i]<<" ";
    }
    return 0;
}
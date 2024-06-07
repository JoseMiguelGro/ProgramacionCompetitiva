#include <iostream>
using namespace std;
int main(){
    int x,sum=0;
    cin>>x;
    int y[x],z[x];
    for (int i = 0; i < x; i++)
    {
        cin>>y[i]>>z[i];
        sum+=y[i];
    }
    string resultado = "Bien";
    for (int i = 1; i < x; i++) {
        if (y[i]==y[i-1] or z[i]==z[i-1]) {
            resultado = "Mal";
            break;
        }
    }
    cout<<resultado<<" "<<sum<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n,x,par=0,impar=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if (x%2==0)
            par+=1;
        else
            impar+=1;
    }
    cout<<par<<" "<<impar;
    return 0;
}
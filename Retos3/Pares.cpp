#include <iostream>
using namespace std;
int main(){
    int x,z=0;
    cin>>x;
    long int y[x];
    for (int i = 0; i < x; i++)
    {
        cin>>y[i];
    }
    for (int i = 0; i < x; i++)
    {
        if(y[i]%2==0){
            cout<<"["<<y[i]<<"] ";
            z++;
        }            
    }
    if(z==0)
        cout<<":(";
    return 0;
}
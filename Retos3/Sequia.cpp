#include <iostream>
using namespace std;
int main(){
    int x,y,z,sum=0,total=0;
    cin>>x>>y;
    int sumas[x];
    for (int i = 0; i < x; i++)
    {
        cin>>sumas[i];
    }
    for (int i = 0; i < x; i++)
    {
        if(y>0)
        {
            y-=sumas[i];
            total++;
        }
    }
    cout<<total;
    return 0;
}
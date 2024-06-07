#include <iostream>
using namespace std;
int main(){
    int x,y,z,final=0;
    cin>>x;
    int total[x];
    for (int i=0;i<x;i++)
    {
        cin>>total[i];
    }
    cin>>y>>z;
    for (int i = 0; i < x; i++)
    {
        if (total[i]>=y and total[i]<=z)
        {
            final++;
        }
    }
    cout<<final;
    return 0;
}
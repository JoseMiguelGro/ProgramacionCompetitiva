#include <iostream>
using namespace std;
int main(){
    int x,promedio=0,final=0;
    cin>>x;
    int total[x];
    for (int i = 0; i < x; i++)
    {
        cin>>total[i];
        promedio+=total[i];
    }
    promedio/=x;
    for (int i = 0; i < x; i++)
    {
        if (total[i]>promedio)
        {
            final++;
        }
    }
    cout<<final;
    return 0;
}
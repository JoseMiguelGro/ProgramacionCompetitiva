#include <iostream>
using namespace std;
int main(){
    int x,sum1=0,sum2=0;
    cin>>x;
    int total[x];
    for (int i = 0; i < x; i++)
    {
        cin>>total[i];
    }
    for (int i = 0; i < x; i++)
    {
        if(i<x/2)
            sum1+=total[i];
        else
            sum2+=total[i];
    }
    if(sum1==sum2)
        cout<<sum1<<" 1";
    else
        cout<<sum1+sum2<<" 0";
    return 0;
}
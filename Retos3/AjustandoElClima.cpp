#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int x;
    cin>>x;
    float n1[x],n2[x];
    for (int i = 0; i < x; i++)
    {
        cin>>n1[i];
    }
    for (int i = 0; i < x; i++)
    {
        if (i==0 or i+1==x)
        {
            n2[i]=n1[i];
        }
        else
        {
            n2[i]=(n1[i-1]+n1[i]+n1[i+1])/3.0;
        }
    }
    for (int i = 0; i < x; i++)
    {
        cout<<fixed<<setprecision(2)<<n2[i]<<" ";
    }
    return 0;
}
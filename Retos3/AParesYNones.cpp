#include <iostream>
using namespace std;
int main(){
    int n,x,sum1=0,sum2=0,a=0,b=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(x%2==0)
        {
            sum1=sum1+x;
            a++;
        }
        else
        {
            sum2=sum2+x;
            b++;
        }
    }
    sum1/=a;
    sum2/=b;
    if(sum1>sum2)
        cout<<"APARICIO";
    else if(sum2>sum1)
        cout<<"NONILA";
    else
        cout<<"EMPATE!";
    return 0;
}
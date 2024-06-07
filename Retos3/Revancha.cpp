#include <iostream>
using namespace std;
int main(){
    int n,x,min,max,promedio=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        promedio+=x;
        if (i==0)
        {
            min=x;
            max=x;
        }
        if (x>max)
            max=x;
        if(x<min)
            min=x;
    }
    promedio/=n;
    cout<<min<<" "<<max<<" "<<promedio;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int y[x],min,max,sum=0;
    for (int i = 0; i < x; i++)
    {
        cin>>y[i];
        sum+=y[i];
        if (i==0)
        {
            min=y[i];
            max=y[i];
        }else if (y[i]<min)
            min=y[i];
        else if (y[i]>max)
            max=y[i];
    }
    for (int i = 0; i < x-1; i++)
    {
        if (y[i]>=y[i+1])
        {
            cout<<"Incorrecto: "<<min<<" "<<max;
            return 0;
        }
    }
    cout<<"Correcto: "<<sum<<" pesos";
    return 0;
}
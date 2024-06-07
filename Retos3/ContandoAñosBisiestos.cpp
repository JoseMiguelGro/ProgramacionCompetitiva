#include <iostream>
using namespace std;
int main(){
    int x[10],sum=0;
    for (int  i = 0; i < 10; i++)
    {
        cin>>x[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if((x[i]%4==0 and x[i]%100!=0)or(x[i]%400==0))
            sum++;
    }
    cout<<sum;
    return 0;
}
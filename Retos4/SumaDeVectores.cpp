#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x;
    int total[x];
    for (int i = 0; i < x; i++)
    {
        cin>>total[i];
    }
    for (int i = 0; i < x; i++)
    {
        cin>>y;
        total[i]+=y;
    }
    for (int i = 0; i < x; i++)
    {
        cout<<total[i]<<" ";
    }
    return 0;
}
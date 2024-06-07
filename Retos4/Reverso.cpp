#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int total[x];
    for (int i = 0; i < x; i++)
    {
        cin>>total[i];
    }
    for (int i = x-1; i>=0; i--)
    {
        cout<<total[i]<<" ";
    }
    return 0;
}
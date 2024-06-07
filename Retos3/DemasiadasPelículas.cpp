#include <iostream>
using namespace std;
int main(){
    int x,y,z,sum=0;
    cin>>x>>y;
    for (int i = 0; i < y; i++)
    {
        cin>>z;
        sum+=z;
    }
    if (sum>x)
        cout<<"NO";
    else
        cout<<"SI";
    return 0;
}
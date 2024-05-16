#include <iostream>
using namespace std;
int main(){
    int x,y,z,total=0;
    cin>>x;
    for (int i = 0; i < x; i++)
    {
        cin>>y>>z;
        total+=(y*z);
    }
    cout<<total;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int x,y,sum=0;
    cin>>x;
    for (int i = 0; i < x; i++)
    {
        cin>>y;
        if (i<x-1)
            sum+=y;
    }
    if (y==sum)
        cout<<"1";
    else
        cout<<"-1";
    
    return 0;
}
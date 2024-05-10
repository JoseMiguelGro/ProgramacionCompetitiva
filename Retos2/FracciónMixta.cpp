#include <iostream>
using namespace std;
int main(){
    int x,y,r,total;
    cin>>x>>y;
    if(x%y==0)
        cout<<x/y;
    else
    {
        total=x/y;
        r=x%y;
        cout<<total<<" "<<r<<"/"<<y;
    }
}
#include <iostream>
using namespace std;
int main(){
    int x,y,total;
    cin>>x>>y;
    total=x*y;
    cout<<total/1440<<" ";
    total%=1440;
    cout<<total/60<<" ";
    total%=60;
    cout<<total;
    return 0;
}
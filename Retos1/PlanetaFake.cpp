#include <iostream>
using namespace std;
int main(){
    int s,m,h,d,xd;
    cin>>xd;
    d=xd/42000;
    xd%=42000;
    h=xd/3500;
    xd%=3500;
    m=xd/50;
    xd%=50;
    s=xd;
    cout<<d<<" "<<h<<" "<<m<<" "<<s<<" ";
}
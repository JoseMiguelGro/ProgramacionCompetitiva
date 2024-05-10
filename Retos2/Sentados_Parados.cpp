#include <iostream>
using namespace std;
int main(){
    int r,s,b,a;
    cin>>r>>s>>b;
    if(r*s>=b)
    {
        a=0;
        cout<<b<<" "<<a;
    }else
    {
        a=b-r*s;
        cout<<r*s<<" "<<a;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int t,a,b,c,d,e,i,total;
    cin>>t>>a>>b>>c>>d>>e;
    total=a+b+c+d+e;
    if(a==t)
        i++;
    if(b==t)
        i++;
    if(c==t)
        i++;
    if(d==t)
        i++;
    if(e==t)
        i++;
    cout<<i<<" "<<total;
    return 0;
}
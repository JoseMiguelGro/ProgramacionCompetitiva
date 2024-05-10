#include <iostream>
using namespace std;
int main(){
    int a,b,c,i;
    cin>>a>>b>>c;
    if(a>b and a>c)
    {
        i++;
        if(b<c)
            i++;
    }else if(b>a and b>c)
    {
        i++;
        if (c<a)
            i++;
    }else if(a>b)
        i++;
    cout<<i;
    return 0;
}
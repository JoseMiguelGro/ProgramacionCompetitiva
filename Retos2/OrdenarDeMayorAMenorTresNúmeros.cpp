#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a>=b and a>=c)
    {
        if(b>=c)
            cout<<a<<endl<<b<<endl<<c;
        else
            cout<<a<<endl<<c<<endl<<b;
    }else if(b>=c)
    {
        if (a>=c)
            cout<<b<<endl<<a<<endl<<c;
        else
            cout<<b<<endl<<c<<endl<<a;
    }else
    {
        if(a>=b)
            cout<<c<<endl<<a<<endl<<b;
        else
            cout<<c<<endl<<b<<endl<<a;
    }    
    return 0;
}
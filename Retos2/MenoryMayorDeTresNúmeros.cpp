#include <iostream>
using namespace std;
int main (){
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b and a<c)
    {
        if(b<c)
        {
            cout<<a<<endl<<c;
        }
        else
        {
            cout<<a<<endl<<b;
        }
    }
    else if (b<c)
    {
        if(c<a)
        {
            cout<<b<<endl<<a;
        }
        else
        {
            cout<<b<<endl<<c;
        }
    }
    else
    {
        if(b<a)
        {
            cout<<c<<endl<<a;
        }
        else
        {
            cout<<c<<endl<<b;
        }
    }
    return 0;
}
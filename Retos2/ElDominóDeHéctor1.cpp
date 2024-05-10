#include <iostream>
using namespace std;
int main(){
    long int a,b,total;
    cin>>a>>b;
    if(a>b)
    {
        total=((a+1)*(a+2))/2;
    }
    else
    {
        total=((b+1)*(b+2))/2;
    }
    cout<<total;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b or a==c or b==c)
        cout<<"Si";
    else
        cout<<"No";
    return 0;
}
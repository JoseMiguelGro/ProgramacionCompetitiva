#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b and a==c)
        cout<<"equilatero";
    else if(a==b or a==c or b==c)
        cout<<"isosceles";
    else
        cout<<"escaleno";
    return 0;
}
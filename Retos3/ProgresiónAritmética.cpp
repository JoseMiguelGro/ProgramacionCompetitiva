#include <iostream>
using namespace std;
int main(){
    int a,b,n;
    long int total=0;
    cin>>a>>b>>n;
    for (int i = 0; i < n; i++)
    {
        total=total+(a+b*i);
    }
    cout<<total;
    return 0;
}
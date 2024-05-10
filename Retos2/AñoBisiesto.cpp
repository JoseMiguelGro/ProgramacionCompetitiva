#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;

    if((x%4==0 and x%100!=0)or(x%400==0))
        cout<<"BISIESTO";
    else
        cout<<"NO BISIESTO";
    return 0;
}
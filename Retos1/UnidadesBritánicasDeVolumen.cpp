#include <iostream>
using namespace std;
int main (){
    int g1,c1,p1,t1,o1,c2,p2,t2,o2;
    cin>>g1>>c1>>p1>>t1>>o1;
    o2=o1%8;
    t1+=(o1/8);
    t2=(t1)%2;
    p1+=(t1/2);
    p2=(p1)%2;
    c1+=(p1/2);
    c2=(c1%4);
    g1+=(c1/4);
    cout<<g1<<" "<<c2<<" "<<p2<<" "<<t2<<" "<<o2;
    return 0;
}
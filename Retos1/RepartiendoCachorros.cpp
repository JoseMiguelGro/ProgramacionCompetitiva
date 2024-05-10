#include <iostream>
using namespace std;
int main(){
    int c,p,h;
    cin>>c>>p>>h;
    c-=p;
    p=p+c%(h+1);
    cout<<p;
    return 0;
}
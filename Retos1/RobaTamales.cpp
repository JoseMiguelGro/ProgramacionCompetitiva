#include <iostream>
using namespace std;
int main(){
    int t,b,r,l,c;
    cin>>t>>b;
    l=t/2;
    r=t%2;
    l+=r;
    c=(t-l)/(b-1);
    r=(t-l)%(b-1);
    l+=r;
    cout<<l;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n,o,p,c,t1,t2,t3,total;
    cin>>n>>o>>p>>c;
    t1=n/c;
    n%=c;
    t2=n/p;
    n%=p;
    t3=n/o;
    n%=o;
    total=t1*1500+t2*250+t3*50+n*10;
    cout<<total<<endl;
    cout<<n<<" "<<t3<<" "<<t2<<" "<<t1;
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float n,k,total;
    cin>>n;
    cin>>k;
    total=(n/(n+k))*100;
    cout<<fixed<<setprecision(2)<<total<<"%";
    return 0;
}
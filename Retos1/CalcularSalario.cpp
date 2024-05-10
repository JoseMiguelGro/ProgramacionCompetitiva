#include <iostream>
using namespace std;
int main(){
    int n, x;
    double total;
    cin>>n>>x;
    total=(n*x-(n*x*0.0935))*1.02;
    cout<<total;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n,m,total;
    cin>>n>>m;
    total=(n-(n/2))%m;
    cout<<total;
    return 0;
}  
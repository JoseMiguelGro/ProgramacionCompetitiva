#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    for ( n; n <= m; n++)
    {
        if(n%2==0)
            cout<<n<<endl;
    }
    return 0;
}
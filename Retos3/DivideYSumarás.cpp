#include <iostream>
using namespace std;
int main(){
    int x,total=0;
    cin>>x;
    for (int i = 1; i <= x; i*=2)
    {
        total+=(x/i);
    }
    cout<<total;    
    return 0;
}
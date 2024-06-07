#include <iostream>
using namespace std;
int main(){
    int x,total=0;
    cin>>x;
    for (int i = 1; i <= x; i++)
    {
        if (x%i==0)
            total+=1;
    }
    cout<<total;
    return 0;
}
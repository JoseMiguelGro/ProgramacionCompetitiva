#include <iostream>
using namespace std;
int main(){
    int x,r,i;
    cin>>x;
    while (x!=0)
    {
        r=x%10;
        if(r%2==0)
            i++;
        x/=10;
    }
    if(i%2==0)
        cout<<"SI";
    else
        cout<<"NO";
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    if (n%2==0)
    {
        n/=2;
        i++;
    }else{
        n++;
        i++;
    }
    if(n>=100){
        n/=100;
        i++;
    }else if (n>=10)
    {
        n/=10;
        i++;
    }
    if (n%3==0)
    {
        n--;
        i++;
    }
    cout<<n<<" "<<i;
    return 0;
}
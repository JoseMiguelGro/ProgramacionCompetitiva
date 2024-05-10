#include <iostream>
using namespace std;

int main()
{
    int n1;
    cin>>n1;
    cout<<"De 500 hay "<<n1/500<<endl;
    n1%=500;
    cout<<"De 200 hay "<<n1/200<<endl;
    n1%=200;
    cout<<"De 100 hay "<<n1/100<<endl;
    n1%=100;
    cout<<"De 50  hay "<<n1/50<<endl;
    n1%=50;
    cout<<"De 25  hay "<<n1/25<<endl;
    n1%=25;
    cout<<"De 10  hay "<<n1/10<<endl;
    n1%=10;
    cout<<"De 5   hay "<<n1/5<<endl;
    n1%=5;
    cout<<"De 1   hay "<<n1/1<<endl;
    return 0;
}

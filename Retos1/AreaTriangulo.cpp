#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n1,n2,total;
    cin>>n1;
    cin>>n2;
    total=(n1*n2)/2;
    cout<<fixed<<setprecision(3)<<total<<endl;
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int l;
    cin>>l;
    if(l>=0 and l<=3)
        cout<<"BEBE";
    else if(l>=4 and l<=14)
        cout<<"NINO";
    else if(l>=15 and l<=18)
        cout<<"JOVEN";
    else if(l>=19 and l<=65)
        cout<<"ADULTO";
    else if(l>65)
        cout<<"ADULTO 3RA";
    return 0;
}
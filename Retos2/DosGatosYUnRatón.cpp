#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(abs(c-a)==abs(c-b))
        cout<<"raton C";
    else if(abs(c-a)<abs(c-b))
        cout<<"gato A";
    else
        cout<<"gato B";
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    if(t>=21 and t<=29)
        cout<<"tibia"<<endl;
    else if (t>29)
        cout<<"caliente!"<<endl;
    else
        cout<<"fria!"<<endl;
    if(t<15 or t>34)
        cout<<"RIP escamitas :(";
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n;
    bool total;
    cin>>n;
    int j[n],g[n];
    for (int i = 0; i < n; i++)
    {
        cin>>j[i]>>g[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (g[i]%6==0)
            total=false;
        else
            total=true;
        if ((j[i]==1 and total==true) or (j[i]==2 and total==false))
            cout<<"Me Want Cookie!"<<endl;
        else
            cout<<"I Dont Share Cookies"<<endl;        
    }
    return 0;
}
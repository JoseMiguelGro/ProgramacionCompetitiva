#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int j[n],g[n];
    for (int i = 0; i < n; i++)
    {
        cin>>j[i]>>g[i];
    }
    for (int i = 0; i < n; i++)
    {
        if ((j[i]==1 and g[i]%6!=0)or (j[i]==2 and g[i]%6==0))
            cout<<"Me Want Cookie!"<<endl;
        else
            cout<<"I Dont Share Cookies"<<endl;        
    }
    return 0;
}
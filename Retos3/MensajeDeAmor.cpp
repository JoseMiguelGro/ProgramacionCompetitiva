#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int y[x];   
    for (int i = 0; i < x; i++)
    {
        cin>>y[i];
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y[i]; j++)
        {
            cout<<"<3";
        }
        cout<<endl;
    }
    return 0;
}
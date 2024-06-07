#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int x,y,dias=1;
    string Semana[7]={"Sun","Mon","Tue","Wed","Thr","Fri","Sat"};
    cin>>x>>y;
    int total[49];
    for (int i = 0; i < 7; i++)
    {
        cout<<setw(4)<<Semana[i];
    }
    cout<<endl;
    for (int i = 0; i < 6; ++i) { 
        for (int j = 0; j < 7; ++j) {
            if (i == 0 and j < x-1) {
                cout<<setw(4) << " ";
            } else if (dias <= y) {
                cout<<setw(4) << dias;
                dias++;
            }
        }
        cout<<endl;
        if (dias > y) 
            break;  
    }
    return 0;
}
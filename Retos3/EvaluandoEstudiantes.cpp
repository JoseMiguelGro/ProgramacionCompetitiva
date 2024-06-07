#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    switch (x)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout<<"Reprobado";
        break;
    case 6:
        cout<<"Suficiente";
        break;
    case 7:
    case 8:
        cout<<"Bien";
        break;
    case 9:
        cout<<"Sobresaliente";
        break;
    case 10:
        cout<<"Excelente";
        break;
    default:
        cout<<"Error";
        break;
    }
}
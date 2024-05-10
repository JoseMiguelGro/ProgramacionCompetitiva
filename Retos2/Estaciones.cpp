#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    switch (x)
    {
    case 1:
    case 2:
    case 12:
        cout<<"INVIERNO";
        break;
    case 3:
    case 4:
    case 5:
        cout<<"PRIMAVERA";
        break;
    case 6:
    case 7:
    case 8:
        cout<<"VERANO";
        break;
    case 9:
    case 10:
    case 11:
        cout<<"OTOÑO";
        break;
    default:
        cout<<"ERROR";
        break;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int matriz[2][3]={
        {5,4,3},{2,1,0}
    };
    /*
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<matriz[j][i]<<endl;
        }   
    }
    */
    for (int i = 0; i < 2; i++)
    {
        if (i==0 or i%2==0)
        {
            for (int j = 0; j < 3; j++)
            {
                cout<<matriz[i][j]<<endl;
            }
        }else
        {
            for (int j = 2; j >=0; j--)
            {
                cout<<matriz[i][j]<<endl;
            }
        }
    }
    return 0;
}
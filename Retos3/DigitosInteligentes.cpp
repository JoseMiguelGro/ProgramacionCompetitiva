#include <iostream>
using namespace std;
int main(){
    int x,inicio,fin;
    cin>>x;
    int total[x];
    for (int i = 0; i < x; i++)
    {
        int sum=0;
        cin>>inicio>>fin;
        for (inicio;inicio<=fin;inicio++)
        {
            int j=inicio;
            while (j>0)
            {
                sum+=(j%10);
                j/=10;
            }           
        }
        total[i]=sum;
    }
    for (int i = 0; i < x; i++)
    {
        cout<<total[i]<<endl;
    }       
    return 0;
}
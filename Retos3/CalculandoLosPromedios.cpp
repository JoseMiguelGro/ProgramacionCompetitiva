#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n,k,x;
    cin>>n;
    int min[n],max[n];
    float promedio[n];
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        cin>>k;
        for (int j = 0; j < k; j++)
        {
            cin>>x;
            sum+=x;
            if (j==0)
            {
                min[i]=x;
                max[i]=x;
            }
            if(x>max[i])
                max[i]=x;
            if(x<min[i])
                min[i]=x;
        }
        promedio[i]=float(sum)/k;
    }
    for (int i = 0; i < n; i++)
    {
        if (promedio[i]==int(promedio[i]))
            cout<<int(promedio[i])<<" "<<min[i]<<" "<<max[i]<<endl;
        else
            cout<<fixed<<setprecision(3)<<promedio[i]<<" "<<min[i]<<" "<<max[i]<<endl;
    }
    return 0;
}
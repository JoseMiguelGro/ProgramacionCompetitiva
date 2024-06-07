#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin>>x[i];
    }
    sort(x,x+n,less<int>());
    for (int i = 0; i < n-1; i++)
    {
        if ((x[i]+1)==x[i+1])
            continue;
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"SI";
    return 0;
}
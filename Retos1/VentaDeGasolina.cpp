    #include <iostream>
    using namespace std;
    int main(){
        int L,N,l,m,w,j,v,s,d;
        cin>>L>>N>>l>>m>>w>>j>>v>>s>>d;
        l=L-(l*N);
        m=(L+l)-(m*N);
        w=(L+m)-(w*N);
        j=(L+w)-(j*N);
        v=(L+j)-(v*N);
        s=(L+v)-(s*N);
        d=(L+s)-(d*N);
        cout<<l<<" "<<m<<" "<<w<<" "<<j<<" "<<v<<" "<<s<<" "<<d;
        return 0;
    }       
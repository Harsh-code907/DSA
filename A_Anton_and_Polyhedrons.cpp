#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int count=0;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;

        if(s=="Icosahedron") count+=20;
        else if(s=="Tetrahedron") count+=4;
        else if(s=="Cube") count+=6;
        else if(s=="Octahedron") count+=8;
        else count+=12;
    
    }

    cout<<count<<endl;

    return 0;
}
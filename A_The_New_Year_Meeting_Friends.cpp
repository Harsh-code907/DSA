#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;

    int choose;

    if(x1>x2 && x1<x3 || x1<x2 && x1>x3) choose=x1;
    else if(x2>x1 && x2<x3 || x2<x1 && x2>x3) choose=x2;
    else choose=x3;

    int ans=0;

    if(choose==x1) ans+=abs(x1-x2)+abs(x1-x3);
    else if(choose==x2) ans+=abs(x1-x2)+abs(x2-x3);
    else ans+=abs(x1-x3)+abs(x2-x3);

    cout<<ans<<endl;

   return 0;

}
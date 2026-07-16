#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    string s1="I hate it";
    string s2="I love it";

    string ans;

    bool hint=0;

    while(n--){
       if(!ans.empty()){
        ans.pop_back();
        ans.pop_back();
        ans+="that";
       }
     
       if(hint==0){
        if(!ans.empty()) ans+=" ";
        ans+=s1;
        hint=1;
       }
       else{
        if(!ans.empty()) ans+=" ";
        ans+=s2;
        hint=0;
       }
       
    }

    cout<<ans<<endl;

    return 0;
}
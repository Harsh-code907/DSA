#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c;
    cin>>a>>b>>c;

    vector<int>alpha(26,0);

    for(int i=0;i<c.size();i++){
        alpha[c[i]-'A']++;
    }

    bool ck=1;

    for(int i=0;i<a.size() && ck;i++){
        if(alpha[a[i]-'A']==0) {
            ck=0;
            break;
        }
        else alpha[a[i]-'A']--;
    }

    for(int i=0;i<b.size() && ck;i++){
        if(alpha[b[i]-'A']==0) {
            ck=0;
            break;
        }
        else alpha[b[i]-'A']--;
    }

    bool extra=0;
    for(int i=0;i<26;i++){
        if(alpha[i]!=0){
            extra=1;
            break;
        }
    }


    if(ck==1 && !extra) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

   return 0;

}
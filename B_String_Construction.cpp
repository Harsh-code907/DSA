#include<bits/stdc++.h> 
using namespace std; 

int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    int p; 
    cin>>p; 
    while(p--){ 
        int n,k; 
        cin>>n>>k; 
        int t=n-1-k; 
        bool ok=false; 
        
        for(int i=0;i<=1;++i){ 
            if(ok) break;
            
            int blocks0=(i==0) ? (t+2)/2 : (t+1)/2; 
            int blocks1=(i==1) ? (t+2)/2 : (t+1)/2; 
            int choose[2][2]={{n/2,(n+1)/2},{(n+1)/2,n/2}}; 
            
            for(auto& choice : choose ){ 
                int c0=choice[0]; 
                int c1=choice[1]; 
                if((blocks0==0 && c0>0) || (blocks1==0 && c1>0)){ 
                    continue; 
                } 
                if(c0>=blocks0 && c1>=blocks1){ 
                    int rem0=c0-blocks0; 
                    int rem1=c1-blocks1; 
                    string ans=""; 
                    int current=i; 
                    bool first0=true; 
                    bool first1=true; 
                    
                    for(int j=0;j<t+1;++j){ 
                        if(current==0){ 
                            ans+="0"; 
                            if(first0){ 
                                ans+=string(rem0,'0'); 
                                first0=false; 
                            } 
                        } 
                        else{ 
                            ans+="1"; 
                            if(first1){ 
                                ans+=string(rem1,'1'); 
                                first1=false; 
                            } 
                        } 
                        current=1-current; 
                    } 
                    cout<<ans<<"\n"; 
                    ok=true; 
                    break; 
                } 
            } 
        } 
        if(!ok) cout<<-1<<"\n"; 
    } 
    return 0; 
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={100,20,10,5,1};
    
    long long n;
    cin>>n;

    int count=0;

    for(int i=0;i<5;i++){
        count+=n/arr[i];
        n=n%arr[i];
    }

    cout<<count<<endl;


    return 0;
}
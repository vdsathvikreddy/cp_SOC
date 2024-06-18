#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;



void solve(){
    lli n;
    cin>>n;
    lli arr[n];
    map<lli,lli> mp;
    lli sum=0;
    for(lli i=0;i<n;i++){
        lli z;
        cin>>z;
        sum+=z;
        lli g=sum%n>=0?sum%n:n+sum%n;
        arr[i]=g;
        mp[arr[i]]++;
    }
    lli k=0;
    for(auto i:mp){
        if(i.second>1){
            lli c=i.second;
            lli f=c*(c-1);
            k+=f/2;
        }
        if(i.first==0) k+=i.second;
    }
    cout<<k;
}

int main(){
    solve();
}
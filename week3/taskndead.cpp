#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int sum(vector<lli> dur,int k){
    if(k==1) return dur[0];
    return sum(dur,k-1)+dur[k-1];
}

void solve(){
    lli n;
    cin>>n;
    vector<lli> v1;
    vector<lli> v2;
    lli sum_d=0;
    for(lli i=0;i<n;i++){
        lli x,y;
        cin>>x>>y;
        v1.push_back(x);
        v2.push_back(y);
        sum_d+=y;
    }
    lli sum=0;
    sort(v1.begin(),v1.end());
    for(lli i=0;i<n;i++){
        lli a=v1[i];
        lli b=n-i;
        sum+=(a*b);
    }
    cout<<sum_d-sum<<'\n';
}

int main(){
    solve();
}
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
 
void solve(){
    int n;
    cin>>n;
    lli a[n];
    lli sum;
    lli sum1=0;
    int head=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0) sum=a[i];
        // sum1=0;
        sum1=sum1+a[i];
        // cout<<'\n';
        if(sum1<=0 && i<n-1) {
            head=i+1;
            sum1=0;
        }
        else if(sum1>sum) sum=sum1;
        // cout<<"sum1: "<<sum1<<'\n'<<"sum: "<<sum<<'\n'<<"head: "<<head<<'\n';
    }
    cout<<sum;
}
 
int main(){
    solve();
}
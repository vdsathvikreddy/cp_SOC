#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    int x=0;
 
    for(int i=0;i<n;i++){
        cin>>a[i];
        // if(a[i]>x) x=a[i];
    }
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
 
    // int b[m];
    // x+=(k+1);
    // int arr[x]={0};
    // cout<<x<<'\n';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=2*k;j++){
    //         if((a[i]-k+j)<x && (a[i]-k+j)>=0) arr[a[i]-k+j]++;
    //     }
    // }
 
    // int count=0;
 
    // for(int i=0;i<m;i++){
    //     cin>>b[i];
    //     if(b[i]<x){
    //         cout<<b[i]<<" "<<arr[b[i]]<<" "<<i<<'\n';
    //         if(arr[b[i]]>=1){
    //             count++;
    //             arr[b[i]]--;
    //         }
    //         cout<<count<<" "<<arr[b[i]]<<" "<<i<<'\n';
    //     }
    // }
 
    // cout<<count;
    int i=0,j=0;
    while(i<n && j<m){
        if(b[j]>=(a[i]-k) && b[j]<=(a[i]+k)) {
            x++;
            i++;
            j++;
        }
        else if(b[j]<(a[i]-k)) j++;
        else i++;
    }
    cout<<x;
}
int main(){
    solve();
}
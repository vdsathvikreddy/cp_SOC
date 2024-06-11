#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
 
void solve(){
    lli n,x;
    cin>>n>>x;
    vector<lli> v(n,0);
     for(lli i=0;i<n;i++){
        cin>>v[i];
     }
    multiset<lli> s;
    for(lli i=0;i<n;i++){
        lli a=v[i];
        s.insert(a);
    }
    lli val;
    int pos1=-1,pos2=-1;
    if(x==2 && s.count(1)>=2) val=1;
    else{
        for(auto i:s){
            if(i<x){
                if(i!=x/2 || x%2!=0 ){
                    if(s.count(x-i)){
                        val=i;
                        // cout<<i<<" "<<x-i;
                        // return;
                    }
                }
                else if(s.count(i)>=2) {
                    val=i;
                    // cout<<i<<" "<<i;
                    // return;
                }
            }
        }
    }
    // cout<<"val:"<<val<<'\n';
    if(val>x/2) val=x-val;
    lli r=1;
    for(auto i:v){
        // cout<<i<<" ";
        if(i==val) {
            pos1=r;
            break;
        }
        r++;
    }
    r=1;
    for(auto i:v){
        // cout<<i<<" ";
        if(i==x-val && r!=pos1) {
            pos2=r;
            break;
        }
        r++;
    }
    // cout<<'\n'<<"r:"<<r<<" pos1:"<<pos1<<" pos2:"<<pos2<<'\n';
    if(pos1!=-1 || pos2!=-1){
        // r=(pos1<pos2)?pos1:pos2;
        // pos2=pos1>pos2?pos1:pos2;
        cout<<pos1<<" "<<pos2;
    }
    else cout<<"IMPOSSIBLE";
}
 
int main(){
    solve();
}
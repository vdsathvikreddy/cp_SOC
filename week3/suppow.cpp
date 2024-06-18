#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int power(long long x, unsigned int y, int p) 
{ 
    int res = 1;     
 
    x = x % p; 
  
    if (x == 0) return 0; 
 
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
 
        y = y>>1; // y = y/2 
        x = (x*x) % p; 
    } 
    return res; 
} 

class Solution {
public:
    int superPow(int a, vector<int>& b) {
        lli sum=0;
        lli n=b.size();
        lli p=1140;
        for(lli i=0;i<n;i++){
            sum+=b[i];
            if(sum%p!=sum) sum=sum%p;
            if(i!=n-1) sum*=10;
        }
        if(sum == 0) sum = 1140;
        // cout<<"Hi"<<endl;
        // cout<<sum<<" "<<n<<endl;
        lli ind=a%1337;
        // cout<<ind<<'\n';
        // cout<<"hello"<<endl;
        lli powe=power(ind,sum,1337);
        // cout<<ind<<" "<<powe;
        lli rem=powe%1337;
        return powe;
    }
};
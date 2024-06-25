#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        int m=s.size(),n=t.size();
        while(i<m && j<n){    
            if(s[i]==t[j]) {
                cout<<"matched with "<<s[i]<<" at "<<j<<'\n' ;
                i++;
                j++;
            }
            else j++;
        }
        if(i==m) return true;
        else return false;
    }
};
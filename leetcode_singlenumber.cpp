#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            int x=0;
            if(i!=n-1) if(nums[i]!=nums[i+1]) x++;
            if(i!=0) if(nums[i-1]!=nums[i] ) x++;
            if(i!=0 && i!=n-1 && x==2) return nums[i];
            else if(i==0 || i==n-1){ 
                if(x==1) return nums[i]; 
            }
        }
        return nums[0];
    }
};
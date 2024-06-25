#include<bits/stdc++.h>
using namespace std;

// int guess(int num){
//     if(num>pick) return -1;
//     if(num==pick) return 0;
//     if(num<pick) return 1;
// }
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int x=0;
        for(int i=n;i>0;i/=2){
            if(guess(x+i)==0) return x+i;
            while(guess(x+i)!=-1) x+=i; 
            // if(guess(x+i))
        }
        return x;
        
    }
};
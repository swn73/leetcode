#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>

using namespace std;

/**
 * https://leetcode.com/problems/reverse-integer/
 * 
 */

class Solution {
public:
    int reverse(int x) {
        bool nagative=x<0?true:false; 
        x=x<0?-x:x;
        int n=0;
        while(x){
            if((n*10)/10!=n){
                return 0;
            }
            n*=10;
            n+=(x%10);
            x/=10;
        }
        return nagative?-n:n;
    }
 };
int main(){
    Solution s;
    assert(321==s.reverse(123));
    assert(321==s.reverse(1534236469));
}
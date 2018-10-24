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
        string s;
        long long n=x;
        while(n){s+=('0'+n%10);n/=10;}
        cout<<s<<endl;
        n=0;
        for(auto i=std::begin(s);i<std::end(s);++i){
            n*=10;
            cout<<n<<"\t"<<*i<<"\t"<<*i-'0'<<endl;
            n+=(*i-'0'); 
            cout<<n<<endl;
        }
        cout<<n<<endl;
        return nagative?-n:n;
    }
};
int main(){
    Solution s;
    // assert(321==s.reverse(123));
    assert(321==s.reverse(1534236469));
}
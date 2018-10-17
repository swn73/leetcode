/*
 * =====================================================================================
 *
 *       Filename:  344-Reverse-String.cpp
 *
 *    Description:  https://leetcode.com/problems/reverse-string/
 *
 *        Version:  1.0
 *        Created:  04/24/16 02:55:13
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  hualin xia (http://swn73.github.io/xiahualin/), hua_lin@live.cn
 *   Organization:  
 *
 * =====================================================================================
 */


class Solution {
public:
    string reverseString(string s) {
        if(0==s.size()){
            return s;
        }
        auto i=0;
        auto j=s.size()-1;
        while(i<j){
            auto tmp=s[i];
            s[i]=s[j];
            s[j]=tmp;
            i++;j--;
        }
        return s;
    }
};

/*
 * =====================================================================================
 *
 *       Filename:  345-Reverse-Vowels-of-a-String.cpp
 *
 *    Description:  https://leetcode.com/problems/reverse-vowels-of-a-string/
 *
 *        Version:  1.0
 *        Created:  04/24/16 02:31:18
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
    string reverseVowels(string s) {
        if(s.size() == 0){
            return s;
        }
        std::unordered_set<char> set{'a','e','i','o','u','A','E','I','O','U'};
        auto i=0;
        auto j=s.size()-1;
        auto end=set.end();
        while(i<j){
            while(end == set.find(s[i]) && i<j){i++;}
            while(end == set.find(s[j]) && i<j){j--;}
            if(i>=j)break;
            auto tmp=s[i];
            s[i]=s[j];
            s[j]=tmp;
            i++;j--;
        }
        return s;
    }
};

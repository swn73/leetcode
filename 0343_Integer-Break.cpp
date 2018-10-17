/*
 * =====================================================================================
 *
 *       Filename:  343-Integer-Break.cpp
 *
 *    Description:  https://leetcode.com/problems/integer-break/
 *
 *        Version:  1.0
 *        Created:  04/24/16 04:17:26
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
    int integerBreak(int n) {
        static std::unordered_map<int,int> results;
        if(n==1||n==2){
            return 1;
        }
        int max=-1;
        for(int i=1;i<n;++i){
            if(results.end() != results.find(n-i)){
                if(max<(i*results[n-i])){
                    max=i*results[n-i];
                }
            }else{
                auto tmp=integerBreak(n-i);
                results[n-i]=tmp;
                if(max<(i*tmp)){
                    max=i*tmp;
                }
            }
            if(max<(i*(n-i))){
                max=i*(n-i);
            }
        }
        return max;
    }
};

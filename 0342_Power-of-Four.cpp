/*
 * =====================================================================================
 *
 *       Filename:  342-Power-of-Four.cpp
 *
 *    Description:  https://leetcode.com/problems/power-of-four/
 *
 *        Version:  1.0
 *        Created:  04/24/16 04:45:06
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
    bool isPowerOfFour(int num) {
        return log(num) / log(4) == (int)(log(num) / log(4));
    }
};

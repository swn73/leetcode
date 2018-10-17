/**
 * Solution (DP, O(n)):
 * 
 * Assume L[i] = s[m...i], denotes the longest substring without repeating
 * characters that ends up at s[i], and we keep a hashmap for every
 * characters between m ... i, while storing <character, index> in the
 * hashmap.
 * We know that each character will appear only once.
 * Then to find s[i+1]:
 * 1) if s[i+1] does not appear in hashmap
 *    we can just add s[i+1] to hash map. and L[i+1] = s[m...i+1]
 * 2) if s[i+1] exists in hashmap, and the hashmap value (the index) is k
 *    let m = max(m, k), then L[i+1] = s[m...i+1], we also need to update
 *    entry in hashmap to mark the latest occurency of s[i+1].
 * 
 * Since we scan the string for only once, and the 'm' will also move from
 * beginning to end for at most once. Overall complexity is O(n).
 *
 * If characters are all in ASCII, we could use array to mimic hashmap.
 */

#include<iostream>
#include<vector>
#include<string>

class Solution {
    public:
        int lengthOfLongestSubstring(std::string s) {
            std::vector<int> map(256,-1);
            int size=s.size();
            int longest=0,m=0;
            for(int i=0;i<size;++i){
                int n=map[s[i]]+1;
                m=n>m?n:m;
                map[s[i]]=i;
                int len=i-m+1;
                longest=len>longest?len:longest;
            }
            return longest;
        }
};

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int len=s.size();
        int min_i=0,max_j=0;
        for(int i=0;i<len;++i){
            // center = i
            int x=maxPalindromic(s,i,i);
            int y=maxPalindromic(s,i,i+1);
            if(x>(max_j-min_i+1)){
                min_i=i-(x-1)/2;
                max_j=i+(x-1)/2;
            }
            if(y>(max_j-min_i+1)){
                min_i=i-y/2+1;
                max_j=i+y/2;
            }
            int xx=(len-(i+1))*2-1;
            int yy=(len-(i+1)-1)*2;
            if(xx<=(max_j-min_i+1) && yy<=(max_j-min_i+1)){
                break;
            }
            // cout<<"min_i="<<min_i<<"\tmax_j="<<max_j<<endl;
        }
        return string(s.begin()+min_i,s.begin()+max_j+1);
    }
private:

    int maxPalindromic(const string &s,int left,int right){
        int len=s.size();
        int i=left,j=right;
        while(i>=0 && j<len && s[i]==s[j]){
            i--;j++;
        }
        return j-i-1;
    }
};

int main(){
    {
        Solution solution;
        std::cout<<solution.longestPalindrome("hello world.")<<std::endl;
    }
    {
        Solution solution;
        std::cout<<solution.longestPalindrome("abaa")<<std::endl;
    }
    {
        Solution solution;
        std::cout<<solution.longestPalindrome("aba")<<std::endl;
    }
    {
        Solution solution;
        std::cout<<solution.longestPalindrome("aaaa")<<std::endl;
    }
    {
        Solution solution;
        std::cout<<solution.longestPalindrome("aaaabbbbbbb")<<std::endl;
    }
    {
        Solution solution;
        std::cout<<solution.longestPalindrome("ajfjdjdjdaaanaaa")<<std::endl;
    }
    {
        Solution solution;
        std::cout<<solution.longestPalindrome("ababababababababababcababababab")<<std::endl;
    }
    {
        Solution solution;
        std::cout<<solution.longestPalindrome("babaddtattarrattatddetartrateedredividerb")<<std::endl;
    }
    {
        Solution solution;
        std::cout<<solution.longestPalindrome("babaddtattarrattatddetartrateedredividerb")<<std::endl;
    }
    return 0;
}
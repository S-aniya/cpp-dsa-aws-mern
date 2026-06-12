#include <string>
#include <algorithm>

class Solution {
public:
    bool isPalindrome(int x) {
        bool val=false;
        int y=x;
        if(x<0||x%10==0 && x!=0)
        {
            return false;
        }
        long long rev=0;
        int digit=0;
        while(x>0)
        {
            digit=x%10;
            rev=(rev*10)+digit;
            x=x/10;
        }
        if(rev==y)
            val=true;
        return val;
    }
};
        // if (x<0)
        // {
        //     return false;
        // }
        // string str = to_string(x);
        // string rev= str;
        // reverse(rev.begin(),rev.end());
        // return str==rev;
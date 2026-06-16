// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int digit=0;
        int dup=n;
        int sum=0;
        bool val=true;
        while(n>0)
        {
            digit=n%10;
            sum+=digit*digit*digit;
            n=n/10;
        }
        if(sum!=dup)
        {
            val=false;
        }
        return val;
    }
};
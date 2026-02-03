#include <iostream>
using namespace std;
class Solution {
  public:
    int findSum(int n)  {
        // code here
        if(n==0)
        {
            return 0;
        }
        int result=n*(n+1);
        int res= result/2;
        return res;
    }
};

int main()
{
    Solution sol;
    int res=sol.findSum(5);
    cout<<res;
}
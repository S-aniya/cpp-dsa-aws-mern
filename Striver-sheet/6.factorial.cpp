class Solution {
  public:
    int factorial(int n) {
        // code here
        int fact=1;
        if(n==1 || n==0)
        {
            return 1;
        }
        else
        {
            return n*factorial(n-1);
        }
    }
};


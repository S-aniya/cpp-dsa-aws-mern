//without recursion
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code 
        int left=0;
        int right =arr.size()-1;
        while(left<right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        return;
        
    }
};

//using recursion

class Solution {
  public:
    void helper(vector<int> &arr, int left,int right)
    {
        if(left>=right)
        {
            return;
        }
        else
        {
            swap(arr[left],arr[right]);
            helper(arr,left+1,right-1);
        }
    }
    void reverseArray(vector<int> &arr) {
        // code 
        helper(arr,0,arr.size()-1);
        
    }
};
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        vector<int>ans;
        for(int i = arr.size()-1; i>=0;i--)
        {
          ans.push_back(arr[i]);
        }
        arr=ans;
    }
};
// tc:O(n)
// sc:O(n)

----------------------------------------------------------------------

  //using predefined function
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        reverse(arr.begin(),arr.end());
    }
};
// tc:O(n)
// sc:O(1)

----------------------------------------------------------------------
  //using swap
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int start =0;
        int end = arr.size()-1;
        while(start<=end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    
    }
};
// tc:O(n)
// sc:O(1)
  

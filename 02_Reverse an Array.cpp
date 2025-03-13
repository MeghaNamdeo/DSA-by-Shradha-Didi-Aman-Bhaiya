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
  

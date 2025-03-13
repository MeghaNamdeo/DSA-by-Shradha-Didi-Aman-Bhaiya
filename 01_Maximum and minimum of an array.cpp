//using sorting

class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
       sort(arr.begin(), arr.end());
       int mini=arr[0];
       int maxi=arr[arr.size()-1];
      
       return {mini,maxi};
    }
};
// tc :O(n log n)
// sc:O(1)


------------------------------------------------------------------------------------------------------

  //using predefined function

class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
       int mini = *min_element(arr.begin(), arr.end());
       int maxi = *max_element(arr.begin(), arr.end());
      
       return {mini,maxi};
    }
};
// tc :O(n)
// sc:O(1)

--------------------------------------------------------------------------------------------------------
  class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
       int mini = INT_MAX;
       int maxi = INT_MIN;
       for(int i = 0 ; i < arr.size();i++)
       {
           if(arr[i]<=mini)mini=arr[i];
           if(arr[i]>=maxi)maxi=arr[i];
           
       }
       return {mini,maxi};
    }
};
// tc :O(n)
// sc:O(1)

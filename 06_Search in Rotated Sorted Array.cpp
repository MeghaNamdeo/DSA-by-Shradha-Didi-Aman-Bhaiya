
//using for each loop 
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index=0;
        for(auto i:nums)
        {
            if(i==target)
            {
              return index;
            }
              index++;
            
        }
        return -1;
    }
};
// tc :O(n)
// sc:O(1)

------------------------------------------------------
  
// using for loop
class Solution {
public:
    int search(vector<int>& nums, int target) {

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                return i;
            }
        }
        return -1;
    }
};
// tc :O(n)
// sc:O(1)
-----------------------------------------------------


// using map
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (auto i : nums) {
            freq[i]++;
        }
        for (auto i : freq) {
            if (i.second >= 2) {
                return true;
            }
        }
        return false;
    }
};
// tc:O(n)
// sc:O(n)
----------------------------------------------------------------------
  

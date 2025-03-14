class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {

            for (int j = i; j < nums.size(); j++) {
                int sum = 0;
                for (int k = i; k <= j; k++) {
                    sum = sum + nums[k];
                    maxi = max(maxi, sum);
                }
            }
        }
        return maxi;
    }
};
// tc: O(n^3)
// sc: O(1)

----------------------------------------------------------------------------
  // better approach
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = i; j < nums.size(); j++) {

                sum = sum + nums[j];
                maxi = max(maxi, sum);
            }
        }
        return maxi;
    }
};
// tc: O(n^2)
// sc: O(1)

---------------------------------------------------------------------------------------

    // optimal approach : Kadane's Alogorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxi = INT_MIN;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {

            sum = sum + nums[i];
            maxi = max(maxi, sum);
            if (sum < 0)
                sum = 0;
        }
        return maxi;
    }
};
// tc: O(n)
// sc: O(1)

  

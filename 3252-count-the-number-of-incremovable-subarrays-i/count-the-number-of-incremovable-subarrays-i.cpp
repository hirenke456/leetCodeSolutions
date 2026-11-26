class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        // Iterate over all possible start points (i) and end points (j) of the subarray to remove
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                
                // Step 1: Construct the "remainder" array after removing nums[i...j]
                vector<int> remainder;
                
                // Add elements before index i
                for (int k = 0; k < i; ++k) {
                    remainder.push_back(nums[k]);
                }
                
                // Add elements after index j
                for (int k = j + 1; k < n; ++k) {
                    remainder.push_back(nums[k]);
                }
                
                // Step 2: Verify if the remainder is strictly increasing
                bool strictlyIncreasing = true;
                for (size_t k = 1; k < remainder.size(); ++k) {
                    if (remainder[k] <= remainder[k - 1]) {
                        strictlyIncreasing = false;
                        break;
                    }
                }
                
                // If valid, increment count
                if (strictlyIncreasing) {
                    count++;
                }
            }
        }
        
        return count;
    }
};
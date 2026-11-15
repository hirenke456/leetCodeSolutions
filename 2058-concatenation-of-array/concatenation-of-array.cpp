class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        if (nums.size() > 0 && nums.size() <= 1000) {
            for (int j = 0; j < 2; j++) {
                for (int i = 0; i < nums.size(); i++) {
                    if (nums[i] > 0 && nums[i] <= 1000) {
                        ans.push_back(nums[i]);
                    } else {
                        std::cerr
                            << "Values in the vector are out of range. Must be "
                               "greater than 0 and less than/equal to 1000"
                            << std::endl;
                        return nums;
                    }
                }
            }

        } else {
            std::cerr << "Vector provided is out of bounds. Must be greater "
                         "than 0 and less than/equal to 1000"
                      << std::endl;
            return nums;
        }
        return ans;
    }
};
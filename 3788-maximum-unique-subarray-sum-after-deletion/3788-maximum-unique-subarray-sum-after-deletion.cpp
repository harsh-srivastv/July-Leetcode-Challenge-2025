class Solution {
public:
    int maxSum(vector<int>& nums) {
        int maxVal = *std::max_element(nums.begin(), nums.end());
        if (maxVal <= 0) {
            return maxVal;
        }

        std::unordered_set<int> uniqueNumbers;
        int totalSum = 0; 
        for (int num : nums) {
            if (num < 0 || uniqueNumbers.count(num) > 0) {
                continue;
            }

            totalSum += num;
            uniqueNumbers.insert(num);
        }

        return totalSum;
    }
};
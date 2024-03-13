class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = 0;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            result = result ^ nums[i];
        }
        for (int i = 0; i < size + 1; i++) {
            result = result ^ i;
        }
        return result;
    }
};
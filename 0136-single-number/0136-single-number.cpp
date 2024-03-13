class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        for(int i = 0; i < size; i++) {
            int count = 0;
            for(int j = 0; j < size; j++) {
                if ((nums[i] == nums[j]) && (i != j)) {
                    count++;
                }
            }
            if (count == 0) {
                return nums[i];
            }
        }
        return -1;
    }
};

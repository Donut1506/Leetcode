class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1; // Index of the last element in nums1
        int j = n - 1; // Index of the last element in nums2
        int k = m + n - 1; // Index to fill from the end of nums1

        // Merge nums1 and nums2 into nums1 in sorted order
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // If nums2 has remaining elements, copy them to nums1
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};


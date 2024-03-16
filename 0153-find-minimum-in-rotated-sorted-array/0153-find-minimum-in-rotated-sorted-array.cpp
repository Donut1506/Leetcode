class Solution {
public:
     int findMin(vector<int>& nums)
     {
        int l = 0;
        int r = nums.size();
        int size = r - 1;
        while(l < size)
        {
            int mid = l + (size-l)/2;
            if(nums[mid] > nums[size])
            {
                l = mid+1;
            }
            else if(nums[mid] < nums[size]) 
            {
                size = mid;
            }
            
            else return nums[size];
        }
        return nums[l];
    }   
    
};
class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int result = nums[0];
        int maximum = result;
        int minimum = result;
        int size = nums.size();
        
        for(int i =1; i < size; i++)
        {
            if (nums[i] < 0)
            {
                int temp = maximum;
                maximum = minimum;
                minimum = temp;
            }
        
          maximum = max(nums[i], maximum*nums[i]);
           minimum = min(nums[i], minimum*nums[i]);
           result = max(result, maximum);
            
        }
        return result;
        }
    
};
class Solution 
{
public:    
    int findbound(vector<int>& nums, int target, bool isFirst) 
    {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int bound = -1;        
        while (left <= right) 
        {
            int mid = left + (right - left) / 2;             
            if (nums[mid] == target) 
            {
                bound = mid;
                if (isFirst) 
                {
                    right = mid - 1; 
                } 
                else 
                {
                    left = mid + 1;  
                }
            } 
            else if (nums[mid] < target) 
            {
                left = mid + 1;
            } 
            else 
            {
                right = mid - 1;
            }
        }
        return bound;
    }
    public:
        vector<int> searchRange(vector<int>& nums, int target)
        {
            int start = findbound(nums, target, true);
            int end = findbound(nums, target, false);
            return{start,end};
        }
};

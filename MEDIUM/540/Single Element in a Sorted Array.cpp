class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        if(n == 1)
        {
            return nums[0];
        }
        if(nums[0]!= nums[1])
        {
            return nums[0];
        }
        if(nums[n-2] != nums[n-1])
        {
            return nums[n-1];
        }
        while(left <= right)
        {
            int mid = left + (right - left)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
            {
                return nums[mid];
            }
            else if(mid % 2 == 0)
            {
                if(nums[mid] == nums[mid-1])
                {
                    right = mid -1 ;
                }
                else 
                {
                    left = mid +1;
                }
            }       
            else if(mid % 2 == 1)
            {
                if(nums[mid] == nums[mid-1])
                {
                    left = mid + 1;
                }
                else 
                {
                    right = mid -1;
                }
            }
        }
        return -1;
    }
};

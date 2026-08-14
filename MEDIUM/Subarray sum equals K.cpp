class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int count = 0;
        unordered_map <int,int> prefixseen;
        int currentsum = 0;
        prefixseen[0] = 1;
        for(int i=0; i<n; i++)
        {
            currentsum = currentsum + nums[i];
            if(prefixseen.contains(currentsum - k))
            {
                count = count + prefixseen[currentsum - k];
            }
            prefixseen[currentsum] ++;
        }
        return count;            
    }
};

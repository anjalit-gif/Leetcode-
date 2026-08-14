class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_set<int> a;
        int maxs = 0;
        for(int i =0; i<n; i++)
        {
            a.insert(nums[i]);
        }

        for(auto i = a.begin(); i != a.end(); i++)
        {
            if(!a.contains(*i-1))
            {
                int cnt = 1;
                int x = *i;
                while(a.contains(x+1))
                {
                    x++;
                    cnt++;
                }
                maxs = max(maxs, cnt);
            }
        }
        return maxs;
    }
};

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int idx;
        if(n == 0)
        {
            idx = 0;
        }
        else
        {
            idx = 1;
        }
        for(int i = 1 ; i < n ; i++)
        {
            if(nums[i] > nums[idx-1])
            {
                nums[idx++] = nums[i];
            }
        }
        return idx;
    }
};

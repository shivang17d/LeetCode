class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>m;
        for(auto elem : nums)
        {
            m[elem]++;
            if(m[elem] > n/2) return elem;  
        }
        return -1;
    }
};

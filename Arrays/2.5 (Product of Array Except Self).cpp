class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p1 = 1,p2 = 1;
        int n = nums.size();
        vector<int>ans (n,1);
        for(int i = 0 ; i < n ; i++)
        {
            ans[i] *= p1;
            p1 = p1*nums[i];
            int j = n-1-i;
            ans[j] *= p2;
            p2 = p2*nums[j];
        }
        return ans;
    }
};



/*

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p1 = 1,p2 = 1;
        int n = nums.size();
        vector<int>ans (n,1);
        // left product
        for(int i = 0 ; i < n ; i++)
        {
            ans[i] = p1;
            p1 = p1*nums[i];
        }
        // Multiplying right product with left product
        for(int i = n-1 ; i >= 0 ; i--)
        {
            ans[i] *= p2;
            p2 = p2*nums[i];
        }
        return ans;
        
    }
};








*/

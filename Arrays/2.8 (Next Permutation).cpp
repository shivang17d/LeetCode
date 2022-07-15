//Method 1

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
        for(auto it:nums){
            cout<<it<<endl;
        }
        
    }
};


//Method 2

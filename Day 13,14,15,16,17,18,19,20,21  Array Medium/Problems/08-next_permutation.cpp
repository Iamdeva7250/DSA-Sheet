class Solution {
public:
    void nextPermutation(vector<int>& nums) {
          int ind = -1;
        int n = nums.size();

        // Step 1: Find the first index from the end where the sequence is increasing
        for(int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }
        // If no such index is found, reverse the entire array (this means it's the last permutation)
        if(ind == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 2: Find the smallest element larger than nums[ind] from the right and swap them
        for(int i = n - 1; i > ind; i--) {
            if(nums[i] > nums[ind]) {
                swap(nums[i], nums[ind]);
                break;
            }
        }

        // Step 3: Reverse the sequence after the index to get the next permutation
        reverse(nums.begin() + ind + 1, nums.end());
    }
        
};
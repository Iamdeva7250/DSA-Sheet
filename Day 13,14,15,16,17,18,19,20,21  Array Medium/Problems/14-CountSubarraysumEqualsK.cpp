class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        map<int, int> mpp;
        mpp[0] = 1;
        int presum = 0, cnt = 0;

        for (int i = 0; i < n; i++) {  // Corrected the loop to avoid out-of-bounds access
            presum += nums[i];
            int remove = presum - k;
            cnt += mpp[remove];
            mpp[presum] += 1;
        }
        return cnt;
    }
};

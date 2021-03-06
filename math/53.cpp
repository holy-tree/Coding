class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int sum = 0;
        for(int i : nums){
            if(sum > 0)
                sum += i;
            else
                sum = i;
            res = max(res, sum);
        }
        return res;
    }
};

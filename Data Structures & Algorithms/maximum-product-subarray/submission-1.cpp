class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.size() == 0){
            return 0;
        }

        int maxProduct = nums[0];
        int minProduct = nums[0];
        int result = nums[0];

        for (int i = 1; i < nums.size(); i++){
            if (nums[i] >= 0){
                maxProduct = max(nums[i], maxProduct * nums[i]);
                minProduct = min(nums[i], minProduct * nums[i]);
            }else {
                int temp = maxProduct;
                maxProduct = max(nums[i], minProduct * nums[i]);
                minProduct = min(nums[i], temp * nums[i]);
            }

            result = max(maxProduct, result);
        }
        return result;
    }
};

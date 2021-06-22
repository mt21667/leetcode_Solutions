class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() < 2)
		return nums.size();
        int j = 0;
        int i = 1;

        while (i<nums.size()) {
            if (nums[i] != nums[j]) {
                j++;
                nums[j] = nums[i];
            }

                    i++;
        }

        return j+1;
    }
};

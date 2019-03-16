class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.empty())
			return 0;
		int nnum = nums[0];
		int count = 0;
		for (int i = 1; i < nums.size(); i++) {
			if (nums[i] == nnum) {
				continue;
			}
			else {
				count++;
				nnum = nums[i];
				nums[count] = nums[i];
			}
		}
		return count + 1;
	}
};
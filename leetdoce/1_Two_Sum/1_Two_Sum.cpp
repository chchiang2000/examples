#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	vector<int> ret = {0,0};

    	for (int i = 0; i < nums.size(); i++) {
    		for (int j = i + 1; j < nums.size(); j++) {
    		    if (nums[i] + nums[j] == target) {
    			    ret[0] = i;
    			    ret[1] = j;

    			    return ret;
    		    }
    		}
    	}

        return ret;
    }
};

int main(){
	Solution s;
	vector<int> ret = {0};

	vector<int> nums = {2, 7, 11, 15};
	ret = s.twoSum(nums, 9);

	nums = {3, 2, 4};
	ret = s.twoSum(nums, 6);

    nums = {3, 3};
    ret = s.twoSum(nums, 6);

	return 0;
}

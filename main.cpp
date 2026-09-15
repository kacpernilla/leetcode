#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;

        for(int i = 0; i < nums.size(); i++){
            int rest = target - nums[i];
        
            auto it = seen.find(rest);
            if(it != seen.end()){
                return {it->second, i};
            }

            seen[nums[i]] = i;
        }
        return {};
    }
};


int main(void){
	Solution s;
	//vector<int> nums = {2,7,11,15};
	vector<int> nums = {3,2,4};

	vector<int> result = s.twoSum(nums, 6);
	//vector<int> result = s.twoSum(nums, 9);

	std::cout << "[" << result[0] << ", " << result[1] << "]" << std::endl;

	return 0;
}


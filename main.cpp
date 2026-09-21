#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        size_t iterations = nums.size();

        while(iterations){
            if(i + 1 < nums.size()){
                if(nums[i] == nums[i+1]){
                    nums.erase(nums.begin() + i);
                    i--;
                }
            }
            i++;
            iterations--;
        };
        return nums.size();
    }
};


int main(void) { }

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;

        for(size_t i = 0; i < nums.size(); i++){
            m[nums[i]] += 1;
        }
    
        vector<pair<int, int>> sorted(m.begin(), m.end());

        sort(sorted.begin(), sorted.end(), [](auto& a, auto &b){
            return a.second > b.second;
        });

        vector<int> res;

        for(int i = 0; i < k; i++){
            res.push_back(sorted[i].first);
        }

        return res;
    }
};

int main(void){ }


#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int total = strs[0].length();

        for(int i = 0; i < strs.size() - 1; i++){
            int current = 0;

            for(int j = 0; j < strs[i].length() && j < strs[i+1].length(); j++){
                if(strs[i][j] == strs[i+1][j]){
                    current += 1;
                } else {
                    break;
                }
            }

            total = min(total, current);
        }

        return string(strs[0].begin(), strs[0].begin() + total);
    }
};

int main(){ }

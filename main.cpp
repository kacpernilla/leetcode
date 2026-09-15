#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string classic = to_string(x);
        string reverse(classic.rbegin(), classic.rend());

        for(size_t i = 0; i < classic.length(); i++){
            if(classic[i] != reverse[i]){
                return false;
            }
        }
        return true;
    }
};

int main(void){ }


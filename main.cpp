#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T>
void test(const T& actual, const T& expected, const string& name) {
    if (actual == expected)
        cout << "[PASS] " << name << '\n';
    else
        cout << "[FAIL] " << name << '\n';
}

template <typename T>
void testVector(const vector<T>& actual,
                const vector<T>& expected,
                const string& name) {
    if (actual == expected)
        cout << "[PASS] " << name << '\n';
    else
        cout << "[FAIL] " << name << '\n';
}

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<char, int> m;

        for(char c : s){ m[c] += 1; }

        for(char c : t){
            if(--m[c] < 0) return false;
        }

        return true;
    }
};

int main(void){
    Solution s;

    test(
        s.isAnagram("anagram", "nagaram"),
        true,
        "1"
    );

    test(
        s.isAnagram("rat", "car"),
        false,
        "2"
    );
}


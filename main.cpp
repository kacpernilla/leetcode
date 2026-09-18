#include <bits/stdc++.h>
#include <execution>

class Solution {
public:
    int mySqrt(int x) {
        int i = 1;

        while (1) {
            if (i > x / i) {
                return i - 1;
            } else if (i == x / i) {
                return i;
            }

            i++;
        }
    }
};

int main() { }

#include <string>

using namespace std;

int fetch(char c){
    switch(c) {
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;

        default:
            break;

    }
    return 0;
}

class Solution {
public:
    int romanToInt(string s) {
        int total = 0;

        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && fetch(s[i]) < fetch(s[i + 1]))
                total -= fetch(s[i]);
            else
                total += fetch(s[i]);
        }

        return total;
    }
};

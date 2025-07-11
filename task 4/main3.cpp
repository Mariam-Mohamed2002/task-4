#include <iostream>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> roman = {
        {'I', 1},   {'V', 5},
        {'X', 10},  {'L', 50},
        {'C', 100}, {'D', 500},
        {'M', 1000}
    };

    int total = 0;
    int prev = 0;
    for (int i = s.size() - 1; i >= 0; --i) {
        int current = roman[s[i]];

        if (current < prev)
            total -= current;
        else
            total += current;

        prev = current;
    }

    return total;
}

int main() {
    cout << romanToInt("III") << endl;
    cout << romanToInt("LVIII") << endl;
    cout << romanToInt("MCMXCIV") << endl;
    return 0;
}

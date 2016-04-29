#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    void swap(char &a, char &b) {
        char tmp = a;
        a = b;
        b = tmp;
    }

    string reverseString(string s) {
        int len = s.length();
        int half = len / 2;
        for (int i = 0; i < half; ++ i) {
            swap(s[i], s[len - i - 1]);
        }

        return s;
    }
};

int main() {
	Solution s = Solution();
    cout << s.reverseString("hello") << endl;
}

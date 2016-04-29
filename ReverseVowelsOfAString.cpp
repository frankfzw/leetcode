#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	bool isVowel(char a) {
        return (a == 'a') || (a == 'e') || (a == 'i') || (a == 'u') || (a == 'o')
        	|| (a == 'A') || (a == 'E') || (a == 'I') || (a == 'U') || (a == 'O');
    }
    
    string reverseVowels(string s) {
        
        char* pos = new char[s.length()];
        for (int i = 0; i < s.length(); i ++) {
            if (isVowel(s[i]))
                pos[i] = s[i];
            else
                pos[i] = 'x';
        }
        int j = s.length() - 1;
        for (int i = 0; i < s.length(); i ++) {
            if (isVowel(s[i])) {
                while (pos[j] == 'x')
                    j --;
                s[i] = pos[j];
                j -= 1;
            }
        }
        
        return s;
    }
};

int main() {
	Solution s = Solution();
	cout << s.reverseVowels("hello") << endl;
}

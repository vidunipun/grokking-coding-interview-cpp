#include <iostream>
#include <string>

using namespace std;

bool isVowel(char element) {
    return element == 'a' || element == 'e' || element == 'i' || element == 'o' || element == 'u' ||
           element == 'A' || element == 'E' || element == 'I' || element == 'O' || element == 'U';
}

class Solution {
public:
    string reverseVowels(string s) {
        int start = 0, end = s.size() - 1;

        while (start < end) {
            if (!isVowel(s[start])) {
                start++;
                continue;
            }
            if (!isVowel(s[end])) {
                end--;
                continue;
            }
            swap(s[start], s[end]);
            start++;
            end--;
        }
        return s;
    }
};

int main() {
    Solution solution;
    cout << solution.reverseVowels("AeIoU") << endl;
    cout << solution.reverseVowels("aOPQRSTUVWXYZ") << endl;
    cout << solution.reverseVowels("abcdefghijklmnopqrstuvwxyzABCDEFIJKLMNOPQRSTUVWXYZ") << endl;
    cout << solution.reverseVowels("abcdefghijklmnop") << endl;
    cout << solution.reverseVowels("abcdefghDEFGHIJKLMNOPQRSTUVWXYZ") << endl;
    cout << solution.reverseVowels("DEFGHIJKLMNOPQRSTUVWXYZ") << endl;
}

// The time complexity of the above code is O(N). The space complexity is O(1).
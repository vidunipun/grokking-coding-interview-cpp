#include <iostream>
#include <string>

using namespace std;

bool isAlphanumeric(char element) {
    return (element >= 48 && element <= 57) || (element >= 65 && element <= 90) || (element >= 97 && element <= 122);
}

string createAlphanumericString(string s) {

    string alphanumericString = "";

    for(int i =0; i< s.size(); i++){
        if(isAlphanumeric(int(s[i]))){
            alphanumericString += s[i];
        }
    }
    return alphanumericString;
}


class Solution {
public:
    bool validPalindrome(string s) {
        string compactedString = createAlphanumericString(s);

        int start = 0, end = compactedString.size() - 1;
        bool output = true;
        for (start ; start < end;) {
            if (int(compactedString[start]) - int(compactedString[end]) == 32 || int(compactedString[end]) - int(compactedString[start]) == 32 || int(compactedString[start]) - int(compactedString[end]) == 0) {
                start++;
                end--;
            }
            else {
                output = false;
                return output;
            }
        }
        return output;
    }
};

int main() {
    Solution solution;
    cout << solution.validPalindrome("A man, a plan, a canal, Panama!") << endl;
    cout << solution.validPalindrome("Was it a car or a cat I saw?") << endl;
    cout << solution.validPalindrome("This is not a palindrome") << endl;
}

// The time complexity of the above code is O(N). The space complexity is O(N).

// improved solution 

// can have double pointer used to reduce the space complexity to O(1)

// #include <iostream>
// #include <string>
// #include <cctype>

// using namespace std;

// class Solution {
// public:
//     bool validPalindrome(string s) {
//         int start = 0, end = s.size() - 1;

//         while (start < end) {
//             while (start < end && !isalnum(s[start])) start++;
//             while (start < end && !isalnum(s[end])) end--;

//             if (tolower(s[start]) != tolower(s[end])) {
//                 return false;
//             }
//             start++;
//             end--;
//         }
//         return true;
//     }
// };

// int main() {
//     Solution solution;
//     cout << (solution.validPalindrome("A man, a plan, a canal, Panama!") ? "true" : "false") << endl;
//     cout << (solution.validPalindrome("Was it a car or a cat I saw?") ? "true" : "false") << endl;
//     cout << (solution.validPalindrome("This is not a palindrome") ? "true" : "false") << endl;
// }




       
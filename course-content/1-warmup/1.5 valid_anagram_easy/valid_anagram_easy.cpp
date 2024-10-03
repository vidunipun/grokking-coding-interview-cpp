#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;


class Solution {
public:
    bool validAnagram(string s, string t) {
        unordered_set<char> unique_set;
        bool output = false;

        for (int i=0; i< s.size(); i++){
            unique_set.insert(s[i]);
        }

        if(unique_set.size() == t.size()){
            for (int i=0; i< t.size();){
                if(unique_set.count(t[i]))
                {
                    i++;
                }
                else{
                    return false;
                    break;
                }

            }
            return true;
        }
        else{
            return false;
        }
    }
};

int main() {
    Solution solution;
    cout << solution.validAnagram("listen", "silent") << endl;
    cout << solution.validAnagram("rat" , "cat") << endl;
    cout << solution.validAnagram("hello", "world") << endl;
    cout << solution.validAnagram("hello", "oelh") << endl;
    cout << solution.validAnagram("morning", "mornig") << endl;
}

// time complexity of this code is O(n+m) where n= length of s and m= length of t
// space complexity is O(n)
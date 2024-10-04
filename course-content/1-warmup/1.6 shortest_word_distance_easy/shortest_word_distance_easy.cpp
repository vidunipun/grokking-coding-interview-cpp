#include <iostream>
#include <vector>
#include <limits>

using namespace std;

class Solution {
public:
    int shortestWordDistance(string words[], int size, string word1, string word2) {
        vector<int> word1Indices;
        vector<int> word2Indices;

        for (int i = 0; i < size; i++) {
            if (words[i] == word1) {
                word1Indices.push_back(i);
            }
            if (words[i] == word2) {
                word2Indices.push_back(i);
            }
        }

        int minimumDistance = numeric_limits<int>::max();

        if (word1 == word2) {
            return 0;
        } else {
            for (int i : word1Indices) {
                for (int j : word2Indices) {
                    minimumDistance = min(minimumDistance, abs(i - j));
                }
            }
        }
        return minimumDistance ;
    }
};

int main() {
    Solution solution;
    string words[9] = {"the", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"};
    string word1 = "the";
    string word2 = "the";
    int size = sizeof(words) / sizeof(words[0]);

    cout << solution.shortestWordDistance(words, size, word1, word2) << endl;

    return 0;
}

// time complexity of this approach is O(n x m). 

// better solution

// #include <iostream>
// #include <vector>
// #include <limits>

// using namespace std;

// class Solution {
// public:
//     int shortestWordDistance(vector<string>& words, string word1, string word2) {
//         int index1 = -1, index2 = -1; // Indices of word1 and word2
//         int minimumDistance = numeric_limits<int>::max(); // Start with max value

//         for (int i = 0; i < words.size(); i++) {
//             if (words[i] == word1) {
//                 index1 = i;
//                 // If both words are the same and index2 is set, calculate the distance
//                 if (word1 == word2 && index2 != -1) {
//                     minimumDistance = min(minimumDistance, abs(index1 - index2));
//                 }
//             }
//             if (words[i] == word2) {
//                 index2 = i;
//                 // If both words are the same and index1 is set, calculate the distance
//                 if (word1 == word2 && index1 != -1) {
//                     minimumDistance = min(minimumDistance, abs(index1 - index2));
//                 }
//             }
//             // Update minimum distance if both indices are set for different words
//             if (index1 != -1 && index2 != -1 && word1 != word2) {
//                 minimumDistance = min(minimumDistance, abs(index1 - index2));
//             }
//         }

//         // Return the minimum distance found or -1 if not found
//         return minimumDistance == numeric_limits<int>::max() ? -1 : minimumDistance;
//     }
// };

// int main() {
//     Solution solution;
//     vector<string> words = {"the", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"};
//     string word1 = "fox";
//     string word2 = "dog";

//     cout << "Shortest distance: " << solution.shortestWordDistance(words, word1, word2) << endl;

//     return 0;
// }

// time complexity - O(n)
// space complexity - o(1)


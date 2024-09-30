#include <unordered_set>
#include <iostream>
#include <vector>

using namespace std;


class Solution
{
public:
  bool containsDuplicate(vector<int> &nums)
  {
    // TODO: Write your code here
    for(int i=0; i< nums.size()-1; i++){
      for (int j=i+1; j< nums.size(); j++){
        if(nums[i]== nums[j]){
          return true;
        }
      }
    }
    return false;
  }
};



int main()
{
  Solution solution;
  vector<int> nums1 = {1, 2, 3, 4};
  cout << (solution.containsDuplicate(nums1) ? "true" : "false") << endl;

  vector<int> nums2 = {1, 1, 2, 3};
  cout << (solution.containsDuplicate(nums2) ? "true" : "false") << endl;

  vector<int> nums3 = {1, 2, 3, 4, 5, 1};
  cout << (solution.containsDuplicate(nums3) ? "true" : "false") << endl;

  vector<int> nums4 = {1, 2, 1, 2, 3, 4};
  cout << (solution.containsDuplicate(nums4) ? "true" : "false") << endl;
  return 0;
}

// the time complexity of the above approach is O(N^2)

// Other suggested approaches

// 1. using hash set - time complexity O(N)

// class Solution
// {
// public:
//   bool containsDuplicate(vector<int> &nums)
//   {
//     unordered_set<int> unique_set;
//     for(int x: nums)
//     {
//       if(unique_set).count(x)
//       {
//         return true;
//       }
//       unique_set.insert(x)
//     }
//     return false;
//   }
// };



// 2. sorting - time complexity 

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//       if(nums.size()==0) return false;
//       sort(nums.begin(), nums.end());

//       for (int i=0; i< nums.size()-1; i++)
//       {
//         if(nums[i]==nums[i+1]){
//           return true;
//         }
//       }
//       return false;
//   }
// };



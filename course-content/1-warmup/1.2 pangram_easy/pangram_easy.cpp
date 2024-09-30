#include<iostream>
#include<unordered_set>
#include<iostream>

using namespace std;

class Solution {
  public:
    bool checkIfPangram(string sentence) {
      // TODO: Write your code here
      unordered_set<int> unique_set;

      for(int i=0; i<sentence.size(); i++){
        int ascii_value = int(sentence[i]);

        if( ((65 <= ascii_value) && (ascii_value<= 90) ) || ((97<= ascii_value ) && (ascii_value <= 122)))
        {
          if((65<= ascii_value) && (ascii_value <= 90) )
          {
            ascii_value += 32;
          }
          unique_set.insert(ascii_value);
        }
      }
      if(unique_set.size()==26){
        return true;
      }
      else{
        return false;
      }
    } 
};


int main (){
    Solution Solution;
    cout << (Solution.checkIfPangram("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")? "true" : "false") << endl; 

    cout << (Solution.checkIfPangram("abcdefghijklmnorstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")? "true" : "false") << endl;

    cout << (Solution.checkIfPangram("abcdefghijklmnopqrstuvwxyzABCDEFIJKLMNOPQRSTUVWXYZ")? "true" : "false") << endl;

    cout << (Solution.checkIfPangram("abcdefghijklmnop")? "true" : "false") << endl;

    cout << (Solution.checkIfPangram("abcdefghDEFGHIJKLMNOPQRSTUVWXYZ")? "true" : "false") << endl;

    cout << (Solution.checkIfPangram("DEFGHIJKLMNOPQRSTUVWXYZ")? "true" : "false") << endl;
}

// time complexity of the above code is 0(N). the space complexity is O(1)
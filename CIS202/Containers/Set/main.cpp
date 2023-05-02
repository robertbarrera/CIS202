/*
Given integer inputs howMany and maxNum, generate a vector of howMany unique random integers from 0 to maxNum (exclusive).

The structure of the program is:

main() calls UniqueRandomInts() with arguments howMany, and maxNum.
UniqueRandomInts() returns a vector of howMany unique random integers.
The required output is already provided in main() and PrintNums().
Complete UniqueRandomInts(), which generates random integers until howMany unique integers have been collected in vector nums.

Hint: If a generated number is new, add the number to vector nums and set alreadySeen. If the number has been seen before, increment the global variable retries and generate another random integer.

Note: For testing purposes, the random number generator is seeded with a fixed value (641) in main().

Ex: When the input is:

5 8
the output is

5 4 0 1 6   [2 retries]
*/
#include <iostream>
#include <vector>
#include <set>
using namespace std;

// Print the integers in vector nums separated by a space
void PrintNums(const vector<int>& nums) {
   //for (int i = 0; i < size; ++i) {
   //   cout << nums.at(i) << " ";
  // }
   for (auto value: nums){
      cout << value << " ";
   }
}
//cout << "yes";

// Used in uniqueRandomInt, printed in main()
int retries;

// Generate howMany unique random integers 0 <= N < maxNum and return in nums
vector<int> UniqueRandomInts(unsigned int howMany, int maxNum) {
   int nextRand;
   retries = 0;
   set<int> alreadySeen;
   vector<int> nums;

   /* Type your code here. */
   nextRand = rand() % maxNum;
   while (nums.size() < howMany){
      if (alreadySeen.count(nextRand)){
         retries += 1;
      }
      else{
         nums.push_back(nextRand);
         alreadySeen.insert(nextRand);
      }
      nextRand = rand() % maxNum;
   }
   return nums;
}

int main() {
   unsigned int howMany;
   unsigned int maxNum;

   cin >> howMany;
   cin >> maxNum;
   vector<int> uniqueInts;

   srand(641);                      // Seed random number generator for testing

   uniqueInts = UniqueRandomInts(howMany, maxNum);
   PrintNums(uniqueInts);
   cout << "  [" << retries << " retries]" << endl;
   
   return 0;
}

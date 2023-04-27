/*
A palindrome is a string that reads the same backwards and forwards. Use a deque to implement a program that tests whether a line of text is a palindrome. The program reads a line, then outputs whether the input is a palindrome or not.

Ex: If the input is:

senile felines!
the output is:

Yes, "senile felines!" is a palindrome.
Ex: If the input is:

rotostor
the output is:

No, "rotostor" is not a palindrome.
Ignore punctuation and spacing. Assume all alphabetic characters will be lowercase.

Special case: A one-character string is a palindrome.
*/
#include <iostream>
#include <deque>

using namespace std;

int main() {
   string line;
   bool result;
   deque<char> forward;
   deque<char> backward;
   string::iterator iter;

   getline(cin, line);
   for (iter = line.begin(); iter != line.end(); ++iter){
    if (isalpha(*iter)){
        forward.push_back(*iter);
        backward.push_front(*iter);
    }
    else{
        continue;
    }
   }
    
    while(forward.size() != 0){
        if (forward.front() != backward.front()){
            result = false;
            break;
        }
        else if (forward.front() == backward.front() && forward.size() == 1){
            result = true;
            break;
        }
        else{
            forward.pop_front();
            backward.pop_front();
        }
    }
    /*
    for (int i = 0; i < line.size(); ++i){
        if (isalpha(line.at(i))){
            forward.push_back(line.at(i));
            backward.push_front(line.at(i));
        }
        else{
            continue;
        }
    }
   
    for (int i = 0; i < forward.size(); ++i){
        if (forward.at(i) != backward.at(i)){
            cout << "No, \"" << line << "\" is not a palindrome." << endl;
            break;
        }
        else if (forward.at(i) == backward.at(i) && i == forward.size() - 1){
            cout << "Yes, \"" << line << "\" is a palindrome." << endl;
        }
    }
    */

    if (result){
        cout << "Yes, \"" << line << "\" is a palindrome." << endl;
    }
    else{
        cout << "No, \"" << line << "\" is not a palindrome." << endl;
    }


   return 0;
}

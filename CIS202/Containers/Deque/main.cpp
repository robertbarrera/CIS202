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
    bool result = false;
    deque<char> forward;
    //deque<char> backward;
    string::iterator iter;

    getline(cin, line);
    for (iter = line.begin(); iter != line.end(); ++iter){
        if (isalpha(*iter)){
            forward.push_back(*iter);
            //backward.push_front(*iter);
        }
        else{
            continue;
        }
    }
    
    while(forward.size() != 0){
        //if (forward.front() != backward.front()){
        if(forward.size() == 1){
            result = true;
            break;
        }
        //else if (forward.front() == backward.front() && forward.size() == 1){
        else if (forward.front() != forward.back()){ // && forward.size() == 1){
            result = false;
            break;
        }
        else{
            result = true;
        }
        forward.pop_front();
            //backward.pop_front();
        forward.pop_back();
    }
    if (result){
        cout << "Yes, \"" << line << "\" is a palindrome." << endl;
    }
    else{
        cout << "No, \"" << line << "\" is not a palindrome." << endl;
    }


   return 0;
}

/*
Given main(), complete the program to add people to a queue. The program should read in a list of people's names including "You" (ending with -1), adding each person to the peopleInQueue queue. Then, remove each person from the queue until "You" is at the head of 
the queue. Include print statements as shown in the example below.

Ex. If the input is:
Zadie Smith
Tom Sawyer
You
Louisa Alcott
-1

the output is:
Welcome to the ticketing service...
You are number 3 in the queue.
Zadie Smith has purchased a ticket.
You are now number 2
Tom Sawyer has purchased a ticket.
You are now number 1
You can now purchase your ticket!
*/
/*
File: main.cpp
Description: This program allows any number of names to be added to a ticketing queue, with the sepcific 
   position of "You" being noted to track when the user is at the front of the queue. People are removed
   from the front of the queue until "You" is at the head, denoting when they can now purchase a ticket.
Created: Thursday April 20, 2023
Name: Robert Barrera
Email: barrerar65120@student.vvc.edu
*/
#include <queue>
#include <iostream>

using namespace std;

int main () {
   string personName = "";
   int counter = 0;
   int youPosition;

   queue<string> peopleInQueue;

   getline(cin, personName); //get full name for queue
   while (personName != "-1") {
      // Add personName to peopleInQueue
      peopleInQueue.push(personName);
      if (personName == "You"){ //determine youPosition
        youPosition = peopleInQueue.size();
      }
      getline(cin, personName);
      ++counter;
   }

   cout << "Welcome to the ticketing service... " << endl;
   cout << "You are number " << youPosition << " in the queue." << endl;

   // output head person name and that they have purchased a ticket, remove them from front of queue
   // until "You" is reached in the queue
   while(youPosition != 1){
    cout << peopleInQueue.front() << " has purchased a ticket." << endl;
    peopleInQueue.pop();
    youPosition -= 1; //update youPosition
    cout << "You are now number " << youPosition << endl; //output your position in the queue
   }
   
   // output that you can purchase your ticket when "You" are at the head
   cout << "You can now purchase your ticket!" << endl;

   return 0;
}
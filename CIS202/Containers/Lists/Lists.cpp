/*
Given a ListItem class, complete main() using the built-in list type to create a linked list called shoppingList. The program should read items from input (ending with -1), adding each item to shoppingList, and output each item in shoppingList using the PrintNodeData() function.

Ex. If the input is:

milk
bread
eggs
waffles
cereal
-1
the output is:

milk
bread
eggs
waffles
cereal
*/

#include "ListItem.h"
#include <string>
#include <list>
#include <iostream>

using namespace std;

int main () {
   list<ListItem> shoppingList;
   list<ListItem>::iterator iter;

   string item;

   // TODO: Read inputs (items) and add them to the shoppingList list
   //       Read inputs until a -1 is input
   cin >> item;
   while (item != "-1"){
      shoppingList.push_back(item);
      cin >> item;
   }

   // TODO: Print the shoppingList list using the PrintNodeData() function
   for(ListItem& item : shoppingList) {
      item.PrintNodeData();
   }

   return 0;
}
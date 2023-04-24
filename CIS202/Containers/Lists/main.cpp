/*
File: main.cpp
Description: This program allows a user to enter any number of items into a list of ListItem class 
   type elements. The program then traverses the list witha range based for loop to print the name of
   each list element using the PrintNodeData() class function.
Created: Thursday April 20, 2023 3:00PM
Name: Robert Barrera
Email: barrerar65120@student.vvc.edu
*/
#include "ListItem.h"
#include <string>
#include <list>
#include <iostream>

using namespace std;

int main () {
   list<ListItem> shoppingList;

   string item;

   // Read items into shoppingList until a -1 is input
   getline(cin, item);
   while (item != "-1"){
      shoppingList.push_back(item);
      getline(cin, item);
   }

   // Print shoppingList items with PrintNodeData()
   for(ListItem& item : shoppingList) {
      item.PrintNodeData();
   }

   return 0;
}
/*
File: main.cpp
Description: This program creates a map of a students with their names acting as the map keys, and
   their grades acting as values. The user is then able to input a student's name and new grade, at which
   point the program will output the student's old info before updating the map value and outputing the 
   new info.
Created: Thursday April 20, 2023 3:55PM
Name: Robert Barrera
Email: barrerar65120@student.vvc.edu
*/
#include <map>
#include <string>
#include <iostream>

using namespace std;

int main () {
   string studentName;
   double studentGrade;

   map<string, double> studentGrades;

   // Students' grades (pre-entered)
   studentGrades.emplace("Harry Rawlins", 84.3);
   studentGrades.emplace("Stephanie Kong", 91.0);
   studentGrades.emplace("Shailen Tennyson", 78.6);
   studentGrades.emplace("Quincy Wraight", 65.4);
   studentGrades.emplace("Janine Antinori", 98.2);

   // Read in student name and their new grade
   getline(cin, studentName);
   cin >> studentGrade;
   
   // output student's name and original grade
   cout << studentName <<"\'s original grade: " << studentGrades.at(studentName) << endl;

   //update grade in the map, output information
   studentGrades.at(studentName) = studentGrade;
   cout << studentName <<"\'s new grade: " << studentGrades.at(studentName) << endl;

   return 0;
}
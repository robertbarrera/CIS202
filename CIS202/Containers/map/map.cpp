/*
Given a map pre-filled with student names as keys and grades as values, complete main() by reading in the name of a student, outputting their original grade, and then reading in and outputting their new grade.

Ex: If the input is:

Quincy Wraight
73.1

the output is:
Quincy Wraight's original grade: 65.4
Quincy Wraight's new grade: 73.1
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

   // TODO: Read in new grade for a student, output initial
   //       grade, replace with new grade in map,
   //       output new grade


   return 0;
}
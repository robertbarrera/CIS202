/*
File: main.cpp
Description: This program creates a vector of Mountain class objects, iterates over the vector, and outputs object data in
    table format with columns holding each mountain's name, country, height in feet, and height in meters. minElevation() is
    then called to find the shortest mountain of those in the vector, outputing that object's name and elevation.
Created: Monday June 6, 2023 2:30PM
Name: Robert Barrera
Email: barrerar65120@student.vvc.edu
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include "mountain.h"

using namespace std;

// function to find mountain object with smallest elevation
int minElevation(const vector<Mountain>& mountains) {
    int smallest = mountains.at(0).getElevation(); //initialize smallest with first element elevation

    //iterate through vector, compare smallest to current element elevation
    for (Mountain mountain : mountains){
        if (mountain.getElevation() < smallest){
            smallest = mountain.getElevation(); //update smallest if a shorter elevation value is found
        }
    }
    return smallest; //return int value of smallest found elevation for mountain vector
}

int main() {
    vector<Mountain> mountains; //vector to hold mountain class objects
    int shortest;

    //declaration of mountain class objects, add each instance to vector
    Mountain m1("Chimborazo", "Ecuador", 20549);
    mountains.push_back(m1);
    Mountain m2("Matterhorn", "Switzerland", 14692);
    mountains.push_back(m2);
    Mountain m3("Olympus", "Greece (Macedonia)", 9573);
    mountains.push_back(m3);
    Mountain m4("Everest", "Nepal", 29029);
    mountains.push_back(m4);
    Mountain m5("Mount Marcy - Adirondacks", "United States", 5344);
    mountains.push_back(m5);
    Mountain m6("Mount Mitchell - Blue Ridge", "United States", 6684);
    mountains.push_back(m6);
    Mountain m7("Zugspitze", "Switzerland", 9719);
    mountains.push_back(m7);

    //output formatted column titles for table that will hold mountain information
    cout << left << setw(28) << "Mountain" << "| " << setw(21) << "Country" << "| "
        << setw(21) << "Elevation" << endl;
    
    //row to indicate separation of titles from object info in the table
    cout << setw(73) << setfill('=') << "" << setfill(' ') << endl;

    //iterate through vector to print each object's name, country, elevation in feet and meters. End on a new line.
    for (Mountain mountain : mountains){
        cout << left << setw(28) << mountain.getName() << "| " << setw(21) << mountain.getCountry() << "| "
            << mountain.getElevation() << " ft (" << fixed << setprecision(2) << mountain.toMeters() << " m)" << endl;
    }

    //get shortest elevation value, iterate through vector to find object with matching elevation
    shortest = minElevation(mountains); 
    for (Mountain mountain : mountains){

        //if correct object found, output mountain name and respective elevation and break loop
        if (mountain.getElevation() == shortest){
            cout << "\n" << "Shortest mountain: " << mountain.getName() << " with an elevation of "
                << mountain.getElevation() << " ft (" << mountain.toMeters() << " m)"<< endl;
            break;
        }
    }

    return 0;
}
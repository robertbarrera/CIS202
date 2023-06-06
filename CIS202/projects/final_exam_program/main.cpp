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

    //output formatted columns and titles for table that will hold mountain information
    cout << left << setw(28) << "Mountain" << "| " << setw(21) << "Country" << "| "
        << setw(21) << "Elevation (Feet)" << "| " << setw(21) << "Elevation (Meters)" << "|" << endl;

    cout << setw(98) << setfill('-') << "" << endl;

    //iterate through vector to print each object's name, country, elevation in feet, and elevation in meters. End on a new line.
    for (Mountain mountain : mountains){
            cout << left << setw(28) << setfill(' ') << mountain.getName() << "| " << setw(21) << mountain.getCountry() << "| "
                << setw(21) << mountain.getElevation() << "| " << setw(21) << mountain.toMeters() << "|" << endl
                << setw(98) << setfill('-') << "" << endl; // row of dashes to separate table rows with object info
    }

    //get shortest elevation value, iterate through vector to find object with matching elevation
    shortest = minElevation(mountains); 
    for (Mountain mountain : mountains){
        //if correct object found, output mountain name and respective elevation
        if (mountain.getElevation() == shortest){
            cout << "\n" << mountain.getName() << " is the shortest mountain with an elevation of "
                << mountain.getElevation() << " feet, or " << mountain.toMeters() << " meters"<< endl;
            break; //break loop if correct Mountain found
        }
    }
}
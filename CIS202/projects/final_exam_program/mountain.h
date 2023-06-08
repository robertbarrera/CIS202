/*
File: mountain.h
Description: This file contains the declarations for Mountain class data members and functions. This
    includes constructors, accessors, mutators, and a function to convert the elevation from its default
    unit (feet) to meters.
Created: Monday June 6, 2023 2:30PM
Name: Robert Barrera
Email: barrerar65120@student.vvc.edu
*/
#ifndef MOUNTAIN_H
#define MOUNTAIN_H

#include <iostream>
using namespace std;

class Mountain{
    private:
        //class data members
        string name, country;
        int elevation;
    
    public:
        Mountain(); //default class constructor
        Mountain(string name, string country, int elevation); //class constructor with paramters to pass

        //setters and getters for class data members
        void setName(string name);
        void setCountry(string country);
        void setElevation(int elevation);
        string getName() const;
        string getCountry() const;
        int getElevation() const;

        //function to convert int elevation (in feet) to double elevation (in meters)
        double toMeters();
};

#endif
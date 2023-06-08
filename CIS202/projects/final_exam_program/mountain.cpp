/*
File: mountain.cpp
Description: This file contains the definitions for Mountain class objects. A default constructor and a 
    paramterized constructor to intiialize the name, country, and elevation data members are defined.
    Accessors and mutators to individually change and return data member values are also defined, along
    with a function to convert the class objects elevation from feet to meters.
Created: Monday June 6, 2023 2:30PM
Name: Robert Barrera
Email: barrerar65120@student.vvc.edu
*/
#include "mountain.h"
#include <iostream>

//default constructor to initialize values before using mutator functions for data members
Mountain::Mountain(){
    name = "";
    country = "";
    elevation = -1;
}
//constructor that initializes class object data with passed parameters
Mountain::Mountain(string name, string country, int elevation){
    this->name = name;
    this->country = country;
    this->elevation = elevation;
}

//mutator functions to set the respective data member with parameter value
void Mountain::setName(string name){
    this->name = name;
}
void Mountain::setCountry(string country){
    this->country = country;
}
void Mountain::setElevation(int elevation){
    this->elevation = elevation;
}

//accessor functions return respective data member upon being called
string Mountain::getName() const{
    return name;
}
string Mountain::getCountry() const{
    return country;
}
int Mountain::getElevation() const{
    return elevation;
}

//function returns the converted value of elevation from feet to meters
double Mountain::toMeters(){
    double meters;
    meters = elevation / 3.2808;
    return meters;
}
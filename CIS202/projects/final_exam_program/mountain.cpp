#include "mountain.h"
#include <iostream>
#include <iomanip>

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
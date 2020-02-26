//: Hen.cpp

/* 
 Title: Hen.cpp
 Description: Implementation file for a Hen Class
 Date: 01-Oct-2019
 Author: Andrew Shepherd
 Version: 1.0
 Copyright: 2019 Andrew Shepherd

 Purpose: Implementation file for the operations of the Hen class, and nested
          Nest and Egg classes.
*/

// include and define statements
#include "Hen.h"
#include <iostream>
using namespace std;

// Hen class functions
Hen::Hen() {
   cout << "Hen class constructor called" << endl;
}

Hen::~Hen() { 
   cout << "Hen class destructor called" << endl; 
}

void Hen::display() {
   cout << "Hen class display called" << endl;
}

// Nest class functions
Hen::Nest::Nest() {
   cout << "Nest class constructor called" << endl;
}

Hen::Nest::~Nest() { 
   cout << "Nest class destructor called" << endl; 
}

void Hen::Nest::display() {
   cout << "Nest class display called" << endl;
}

// Egg class functions
Hen::Nest::Egg::Egg() {
   cout << "Egg class constructor called" << endl;
}

Hen::Nest::Egg::~Egg() { 
   cout << "Egg class destructor called" << endl; 
}

void Hen::Nest::Egg::display() {
   cout << "Egg class display called" << endl;
} ///:~
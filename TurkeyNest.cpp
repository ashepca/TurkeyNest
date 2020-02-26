//: TurkeyNest.cpp

/* 
 Title: TurkeyNest.cpp
 Description: Program that creates an egg class, in a nest class, in a Hen class
 Date: 01-Oct-2019
 Author: Andrew Shepherd
 Version: 1.0
 Copyright: 2019 Andrew Shepherd

 Purpose: The program creates an egg class, in a nest class, in a Hen class, 
          then tests the display() and delete functions.

 Compile (with GNU C++): g++ TurkeyNest.cpp Hen.cpp

 Classes: Hen, Next, Egg

 Variables: None
*/

// include and define statements
#include "Hen.h"
#include <iostream>
using namespace std;

// ------------------------------------------------------------------------
// Function: main()
// Purpose:  Main execution of the program
// Inputs:  none
// ------------------------------------------------------------------------

int main(void) {   
   //testing constructor, display and destructor functions
   cout << endl;
   Hen* chicken = new Hen();
   chicken->display();
   delete chicken;
   cout << endl;

   Hen::Nest* roost = new Hen::Nest();
   roost->display();
   delete roost;
   cout << endl;

   Hen::Nest::Egg* ovum = new Hen::Nest::Egg();
   ovum->display();
   delete ovum;
   cout << endl;
} ///:~

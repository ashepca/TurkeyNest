//: Hen.h

/* 
 Title: Hen.h
 Description: Header file for a Hen Class
 Date: 01-Oct-2019
 Author: Andrew Shepherd
 Version: 1.0
 Copyright: 2019 Andrew Shepherd

 Purpose: Interface file for the data and operations of the Hen class, with 
          nested Nest and Egg classes.
*/

// include and define statements
#ifndef HEN_H
#define HEN_H

class Hen {
public:
   Hen(); // Constructor
   ~Hen(); // Destructor
   void display();
   class Nest {
   public:
      Nest(); // Constructor
      ~Nest(); // Destructor
      void display();
      class Egg {
      public:
         Egg(); // Constructor
         ~Egg(); // Destructor
         void display();
      };
   };
};
#endif // HEN_H ///:~

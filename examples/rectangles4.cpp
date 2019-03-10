#include <iostream>
#include "rectangle.hpp"

using namespace std;

int main() {
   Rectangle Rec1;        // Declare Rec1 of type Rectangle
   Rectangle Rec2;        // Declare Rec2 of type Rectangle

   // Rec1 specification
   //Rec1.height = 5.0;
   //Rec1.width = 6.0;
   Rec1.set_dimensions(5.0,6.0);

   // Rec2 specification
   //Rec2.height = 10.0;
   //Rec2.width = 12.0;
   Rec2.set_dimensions(10.0,12.0);

   double area;

   // area of Rec1
   area = Rec1.area();
   cout << "Area of Rec1: " << area << endl;

   // area of Rec2
   area = Rec2.area();
   cout << "Area of Rec2: " << area << endl;

   return 0;
}

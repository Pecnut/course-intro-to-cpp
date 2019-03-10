class Rectangle {
   public:
      double width;    // Width of rectangle
      double height;   // Height of rectangle
      int area() {return width*height;}
      int perimeter() {return 2*(width+height);}
      void set_dimensions (double,double);
};

void Rectangle::set_dimensions (double x, double y) {
  width = x;
  height = y;
}

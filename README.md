# CM Hub: Introduction to C++
Introduction to C++ course for the CM Hub at Imperial College

* **Part 0:** Setting up C++
* **Part 1:** Hello world! Your first steps with C++
* **Part 2:** Arrays, files and functions
* **Part 3:** Pointers, classes and preparing for real science

## The Graduate School logo
<img src="/readme-images/grad-school-logo.png">

## After completing this workshop, you will be better able to
* define the terms source file, compiler, and executable,
* use a compiler to create and run simple codes,
* apply fundamental components of the C++ language including variables, loops, and conditionals,
* create programs designed to solve simple numerical problems,
* interpret common compiler and run-time errors and use these to help debug a program.

In short, you will
* be able to write a simple C++ program,
* be able to understand and edit more complicated C++ programs you have been given,
* feel comfortable searching online for help.

## Part 0. Setting up C++

In this class, we are going to be using C++ as it is installed on the college computers running Windows. Everything in these instructions will work just fine on your personal Mac or Linux machines. However. if you want to use your own Windows machine, that's OK too, but the setup can be a bit awkward and we are unlikely to have time to support it. In case you want to install a C++ compiler on your own Windows computer, the instructions are included [in the appendix](#appendix).

For some programming languages, like Matlab, there is just one program you need to open to write your code and then run it. For others, like C++, you will need one program to write your code, and then one program to *compile* it.

A *compiler* is a program which takes the text file we have written and turns it into something we can run. Compilers do not look like normal programs, with windows and graphics. Instead they are run using the *command line*, or *terminal*.

We are going to have two windows open at the same time:

1. A text editor (we are going to use [Atom](https://atom.io/))
2. The command line or terminal, where a C++ compiler has already been installed and is working

### Getting C++ set up on the college computers
1. Open a browser and navigate to Imperial College [Software Hub](https://softwarehub.imperial.ac.uk/?labs)
2. Search for `atom` in the search box
3. The Atom text editor is one of the few search results. Just click `launch`  - done!
4. Clear the search box and then search for `mingw` in the search box
5. Among the small set of search results that pop up, launch `MinGW 1.0` (the newer version plays badly with Armadillo).
6. You are all set!

### Getting C++ set up on your own machine
See [the appendix](#appendix).


## Part 1. Hello world!

### 1. Where C++ sits among other languages
<img src="/readme-images/maths-not-maths-languages.png" width="50%">

Pros of C++:
* Free
* Fast
* Lots of support
* Lots of libraries

Cons of C++:
* Ideosyncratic
* Steep learning curve; difficult to get started
* Lacks features out of the box
* Not obvious how best to use for science
* Difficult to debug

In short: C++ is a robust, fast language whose steep learning curve makes it worthwhile using for only large maths problems.

### 2. Getting ready

1. Create a new directory in your home drive (H:) called `cpp`. We are going to save our files in here.
2. On the command line:
    1. Change directory to the H: drive by typing `H:` (or from within the MinGW window, `cd H:\`)
    2. Change directory to your new `cpp` directory by typing `cd cpp`

### 3. Hello world!

* Open up Atom

```c++
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
```

* Save as `helloworld.cpp` (colours!)
* Compile by going to the command line and typing
```bash
c++ helloworld.cpp -o hello
```
(or possibly `g++` on your own machine)

* Then run the program. On Windows this is done with
```bash
hello
```
and on Mac/Linux, with
```bash
./hello
```

Try:
* Adding an extra line to the message

### 4. Use of variables
Join in:

```c++
#include <iostream>

using namespace std;

int main()
{
    int x;
    x = 4;
    cout << "The value of x is " << x << endl;
    return 0;
}
```
* Compile and run.

Your turn:
* Change the code so it prints 2*x* instead.
* Let *x* = 3.9. What do you expect to happen? What happens?
* What happens if you forget to add the semicolon?

Join in:
```c++
#include <iostream>

using namespace std;

int main()
{
    double x;
    double y;
    x = 3.141;
    y = 1.618;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    return 0;
}
```
* Compile and run.

Your turn:
* Change the code so that it also prints out the product of *x* and *y*.

### 5. Command-line input
Join in:
* New file! `height.cpp`. Note that we're going to use strings here, which need the `<string>` library.
```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    double height;
    cout << "What is your name?" << endl;
    cin >> name;
    cout << "What is your height?" << endl;
    cin >> height;
    cout << name << " is " << height << " metres tall." << endl;
    return 0;
}
```
* Compile and run.

Your turn:
* Convert the height into feet (1 metre = 3.28084 feet)
* Harder: Convert the height into feet and inches (1 foot = 12 inches), rounding down to an integer number of inches. For example, entering 1.81 (metres) should produce "5 feet 11 inches".
    * Hint 1: If `a` and `b` are integers, then `a%b` = *a* mod *b*.
    * Hint 2: Convert to an integer number of inches first.
* What happens if we type nonsense into the inputs?

### 6. Maths
Basic arithmetic works out of the box, as you've seen. For 'scientific calculator' stuff, we need the `<cmath>` library. Libraries are like toolboxes.

Join in:
* New file! `calculator.cpp`
```c++
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    cout << "Enter a number" << endl;
    cin >> x;
    cout << "That number squared is " << pow(x,2) << endl;
    cout << "The square root of that number is " << sqrt(x) << endl;
    return 0;
}
```

Your turn:
* Add a line displaying the sine of the inputted number.
* Change the code so that it inputs two integers, *a* and *b*, and displays *a*/*b*.
* Input *a* as 3, and *b* as 2. What do you notice?

### 7. If
Join in:
* New file! `bartender.cpp`
```c++
#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Welcome to the pub." << endl;
    cout << "What is your age?" << endl;
    cin >> age;
    if(age >= 18){
        cout << "Have a pint!" << endl;
    }
    cout << "Goodbye!" << endl;
    return 0;
}
```
* Compile and run!
* Let's make it more fun with `else`
```c++
if(age > 18){
    cout << "Have a pint!" << endl;
} else if(age == 18){
    cout << "Show me your ID and then have a pint!" << endl;
} else {
    cout << "I'm calling the police." << endl;
}
```
* Compile and run!

Your turn:
* Also input the name of the customer
* If the name of the customer does not equal your name, get the bartender to ask for money.
    * Hint: `!=` is 'not equal to' in C++.
    * Maybe useful: in `if` statements, `&&` is AND, `||` is OR.

### 8. For and while loops
Join in:
* New file! `square_numbers.cpp`
```c++
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 10;
    for(int i=0; i<n; ++i){
        cout << pow(i,2) << endl;
    }
    return 0;
}
```
* Compile and run!
* Reference: [the difference between `++i` and `i++`](https://dev.to/somedood/the-difference-between-x-and-x-44dl)

Try:
* Save the script as `cube_numbers.cpp`
* Change the script to display the 3rd to 9th cubes.

Join in:
* Change the file: let's **comment out** the for loop above and instead write it as a while loop.
```c++
int i=3; // We can define and initialise a variable at the same time.
while(i<n){
    cout << pow(i,3) << endl;
    ++i;
}
```

Try:
* Replace `++i` with the more verbose command `i = i+1` and convince yourself that it is equivalent.
* Change the script to display the 3rd, 5th, 7th and 9th cubes (i.e. go up in 2s, not in 1s)

## Part 2. Arrays, files and functions

### Challenge to see if you remember what we did last time

Try:
* The Collatz conjecture: create a new script, `collatz_conjecture.cpp`, which inputs a number *n*, and while *n* does not equal 1:
    * Let *f* = *n*/2 if *n* is even
    * Let *f* = 3*n* + 1 if *n* is odd
    * Display *f*
    * Let *n* = *f*

### 9. Saving and reading data

To save and read file, we need to include the `<fstream>` library.

Join in:

* New file! `save_to_file.cpp`

```c++
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream myfile;
    myfile.open ("greeting.txt");
    myfile << "Hello there!" << endl;
    myfile.close();

    return 0;
}
```

Your turn:
* Print the first 10 squares to a text file.
* Run your program again. What can you say about how it writes to the text file?
* Replace `myfile.open ("square_numbers.txt");` with `myfile.open ("square_numbers.txt", ios_base::app);` to make C++ append to the end of a text file, rather than overwrite.

Join in:

* Now let's read in!
* New file! `read_from_file.cpp`

```c++
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string line;
    ifstream myfile;
    myfile.open ("greeting.txt");
    while (getline(myfile,line)){
        cout << line << endl;
    }
    myfile.close();

    return 0;
}
```

### 10. Arrays

Join in:

* Edit `square_numbers.cpp`
```c++
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 10;
    int square_numbers[10];
    for(int i=0; i<n; ++i){
        square_numbers[i] = pow(i,2);
    }
    for(int i=0; i<n; ++i){
        cout << square_numbers[i] << endl;
    }    
    return 0;
}
```
* Note you can't `cout` an array
* We can also define arrays like this:
```c++
int main()
{
    int n = 10;
    int square_numbers[10];
    int favourite_numbers[10] = {3, 1, -4, 1}; // Note we haven't defined them all.;

    for(int i=0; i<n; ++i){
        square_numbers[i] = pow(i,2);
    }

    for(int i=0; i<n; ++i){
        cout << square_numbers[i] << endl;
    }    
    for(int i=0; i<n; ++i){
        cout << favourite_numbers[i] << endl;
    }        

    return 0;
}
```
* You can only use curly brackets like this at initialisation time.
* We can also declare:
    * `int favourite_numbers[] = {3,1,-4,1};`

* Multidimensional arrays work too
    * `int magic_square[3][3] = {{4,9,2},{3,5,7},{8,1,6}};`

* Some basic functionality exists
    * `    max_favourite = *max_element(favourite_numbers,favourite_numbers+10);
;`

Try:
* Create a new file `multiplication_table.cpp`. We are going to make it print a 10x10 multiplication table. Make it:
    * Set up a 10x10 array `product`.
    * Loop through all rows and columns, so that `product[row][col] = row * col;`
    * Loop through all rows and columns again, `cout`ing appropriately the elements of the table.
* Edit `read_from_file.cpp` so that it reads in a list of numbers from `numbers.txt` (no more than 10 numbers long), puts them in an array, and then calculates the mean of those numbers.

 Join in:
 * `const int n = 10;`

### 11. Functions and header files

Writing functions allows us to do more complicated things.

Join in:

* New file! `learning_functions.cpp`

```c++
#include <iostream>

using namespace std;

int sign_function(int n)
{
    int sign;
    if(n>0){
        sign = 1;
    } else if(n==0){
        sign = 0;
    } else {
        sign = -1;
    }
    return sign;
}

int main()
{
    int n;
    n = 3;
    cout << sign_function(n) << endl;

    return 0;
}
```
* Global and local variables.
* Note: order is important. What happens if you define `sign_function` after `main`?

Your turn:

* Add an extra function to this file, `absolute_value`, which returns the absolute value of an integer which is passed to it.
* Add an extra line to the `main` function so that it also displays the absolute value of *n*.

Join in:

* There is a way to define functions with `main` first: it's called 'forward declaration'.
* In general, this is better because it allows more flexible code.

```c++
#include <iostream>

using namespace std;

int sign_function(int n);

int main()
{
    int n;
    n = 3;
    cout << sign_function(n) << endl;

    return 0;
}

int sign_function(int n)
{
    int sign;
    if(n>0){
        sign = 1;
    } else if(n==0){
        sign = 0;
    } else {
        sign = -1;
    }
    return sign;
}

```
* Compile and run!
* Now we're going to split our `sign_function` and `absolute_value` functions into separate files, and call them from our main file.

`learning_functions.cpp`:
```c++
#include <iostream>

using namespace std;

int sign_function(int n);
int absolute_value(int n);

int main()
{
    int n;
    n = 3;
    cout << sign_function(n) << endl;
    cout << absolute_value(n) << endl;

    return 0;
}
```

`sign_function.cpp`:
```c++
#include <iostream> // not strictly necessary

using namespace std;

int sign_function(int n)
{
    int sign;
    if(n>0){
        sign = 1;
    } else if(n==0){
        sign = 0;
    } else {
        sign = -1;
    }
    return sign;
}
```

`absolute_value.cpp`:
```c++
#include <iostream> // not strictly necessary

using namespace std;

int absolute_value(int n)
{
    return abs(n);
}
```

* And now we compile like this:
```bash
c++ sign_function.cpp absolute_value.cpp learning_functions.cpp -o sign
```
* All these forward declarations can be tiresome, so we can put them in a header file and `#include` it:

`learning_functions.hpp`:
```c++
int sign_function(int n);
int absolute_value(int n);
```

`learning_functions.cpp`:
```c++
#include <iostream>
#include "learning_functions.hpp" // double quotes for user-defined header files

using namespace std;

int main()
{
    int n;
    n = 3;
    cout << sign_function(n) << endl;

    return 0;
}
```

(`sign_function.cpp` and `absolute_value.cpp` unchanged)

* Compile and run, remembering to include all files in the compile command:
```bash
c++ sign_function.cpp absolute_value.cpp learning_functions.cpp -o sign
```
* The header file is also a good place to put constants you want to have pre-defined in all of the files in your project.

Your turn:
* Add a function `is_absolute_value_less_than_1`. Put it in its own file, add its declaration to the header file, make the main file output `is_absolute_value_less_than_1(n)`,  compile, and check that it works.
* Harder version: Look up the data type for `true` and `false` in C++


## Part 3. Pointers, classes and preparing for real science

### 12. Debugging

* Your turn:
    * Download the scripts from the debugging folder and try to run them. Can you fix them all?


### 13. Makefiles

* Long compilation scripts are a bit much:
```bash
c++ sign_function.cpp absolute_value.cpp learning_functions.cpp -o sign
```
* So let's put it in a makefile:
```bash
all:
    c++ sign_function.cpp absolute_value.cpp learning_functions.cpp -o sign
```
* (note you need a tab at the beginning, not spaces. Might need to be careful in Atom)
* Then run `make all`


### 14. Pointers

Where in memory is a variable being stored?

Join in:
* New file! `pointers.cpp`:
```c++
#include <iostream>

using namespace std;

int main(){
   int x = 10;

   cout << "Value of x is " << x << endl;
   cout << "Address of x is " << &x << endl;

   return 0;
}
```
* The `&` sign indicates an address in memory.
* A *pointer* is a variable whose value is the address of another variable, and is notated with a `*`

```c++
#include <iostream>

using namespace std;

int main(){
   int x = 10;
   int *p;
   p = &x;          

   cout << "Value of x is " << x << endl;
   cout << "Address stored in p is " << p << endl;
   cout << "Value of *p variable is " << *p << endl;

   return 0;
}
```

Your turn:

* See what happens to the value of `*p` if we change the value of `x`.

Join in:

* Historically pointers were used instead of arrays.
* New file! `pointer_array.cpp`

```c++
#include <iostream>

using namespace std;

int main () {
    int primes[3] = {2, 3, 5};
    int *p;

    p = primes; // Set the point to point at the start of the array

    for (int i = 0; i < 3; i++) {
        cout << "Address of primes[" << i << "] is " << p << endl;
        cout << "Value of primes[" << i << "] is " << *p << endl;
        ++p;
    }  

   return 0;
}
```

Your turn:

* See what `*(primes + 2)` outputs.


### 15. Classes
Classes are one of the main things that separate C++ from C. Classes are ways for us to set up objects that have properties and functions which are particular to that type of object.

Join in:
* New file `rectangles.cpp`
```c++
#include <iostream>

using namespace std;

class Rectangle {
   public:
      double width;    // Width of rectangle
      double height;   // Height of rectangle
};

int main() {
   Rectangle Rec1;        // Declare Rec1 of type Rectangle

   // Rec1 specification
   Rec1.height = 5.0;
   Rec1.width = 6.0;

   double area;

   // area of Rec1
   area = Rec1.height * Rec1.width;
   cout << "Area of Rec1: " << area << endl;

   return 0;
}
```

Your turn:

* Add another rectangle, `Rec2`

You should get something like:

```c++
#include <iostream>

using namespace std;

class Rectangle {
   public:
      double width;    // Width of rectangle
      double height;   // Height of rectangle
};

int main() {
   Rectangle Rec1;        // Declare Rec1 of type Rectangle
   Rectangle Rec2;        // Declare Rec2 of type Rectangle

   // Rec1 specification
   Rec1.height = 5.0;
   Rec1.width = 6.0;

   // Rec2 specification
   Rec2.height = 10.0;
   Rec2.width = 12.0;

   double area;

   // area of Rec1
   area = Rec1.height * Rec1.width;
   cout << "Area of Rec1: " << area << endl;

   // area of Rec2
   area = Rec2.height * Rec2.width;
   cout << "Area of Rec2: " << area << endl;

   return 0;
}
```

Join in:

* Let's make area a 'member function' of the class (so we can call `Rec1.area()`, for example)

```c++
class Rectangle {
   public:
      double width;   // Length of rectangle
      double height;   // Height of rectangle
      int area() {return width*height;}
};

```

Your turn:

* Replace `area = Rec1.height * Rec1.width;` with `area = Rec1.area();` and see that it works.
* Add a member function `perimeter` which returns the length of the perimeter.

Join in:

* We're going to look at another way of creating a member function. This is entirely equivalent.
* Just like how we forward declared functions earlier, we can forward declare them here.

```c++
class Rectangle {
   public:
      double width;   // Length of rectangle
      double height;   // Height of rectangle
      int area() {return width*height;}
      void set_dimensions (double,double);
};

void Rectangle::set_dimensions (double x, double y) {
  width = x;
  height = y;
}
```

Your turn:

* Replace `Rec1.height = 5.0;` and `Rec1.width = 6.0;` with a call to `Rec1.set_dimensions`

If you want to use `Rectangle` in lots of files, it's annoying to define it every time.

Your turn:

* Put the class declaration and `set_dimensions` definition in a header file, `rectangle.hpp`, and call it from `rectangles.cpp`

Your turn:

* Create a class `complex_number`. Set up some functions for adding and multiplying them.

### 16. Armadillo, for vectors and matrices

[Armadillo](http://arma.sourceforge.net/) is a linear algebra library for C++ which uses syntax quite similar to that used in Matlab or Python (with NumPy). Setup is different for different operating systems but the instructions are pretty good.

Here we are going to just include the library directly by downloading and linking to the library files. This doesn't take advantage of your computer's inbuilt fast linear algebra libraries, but it is enough for our purposes.

Installation

* Download the Armadillo zip file from this GitHub repository.
* Extract it to the folder `armadillo-9.200.8` in your `cpp` folder.

Join in:

* New file: `armadillo_test.cpp`:

```c++
#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main()
  {
  mat A = randu<mat>(4,5);
  mat B = randu<mat>(4,5);

  cout << A*B.t() << endl;

  return 0;
  }
```

Compile:
* `c++ armadillo_test.cpp -o armadillo_test -I H:/cpp/armadillo-9.200.8/include`

*More to come!*

### 15. More libraries for mathematics

* Complex numbers: use `<complex>` library
* Parallel processing: use OpenMP

### 16. Optimisation
* When compiling, use the flag `-O2` to optimise for speed a little bit. Use `-O3` for more optimisation. `-O0` is the default. Example:
```bash
c++ helloworld.cpp -o hello -O3
```

# Appendix

## A1. Getting C++ set up on your own machine
Follow the instructions below, depending on which type of machine you will use.

### Step 1: Have a text editor ready
We are going to be writing our code in a text editor. This is a program which lets us produce plain text files. There are lots of choices available, but we recommend downloading [Atom](https://atom.io/).

### Step 2: Have a C++ compiler installed and working
A compiler is a program which takes the text file we have written and turns it into something we can run. Compilers do not look like normal programs, with windows and graphics. Instead they are run using the command line. We will discuss this in class but for now, follow the instructions below, depending on which type of machine you will use.

#### Instructions for Mac and Linux
1. Open Terminal.
2. Type `c++` and press Enter.
3. If it says `clang: error: no input files` or `c++: fatal error: no input files`, then you are ready to go.

#### Instructions for Windows (your own computer)
First let's check that you haven't already got a C++ compiler on your computer. If you have installed Fortran in the past, you might already have a C++ compiler.

1. Open Command Prompt from the Start menu (right-click the Start button and select Command Prompt).
2. Type `g++` and press Enter.
3. If you get the error `g++: fatal error: no input files`, then you are good to go. If you get a different message, you don't have a C++ compiler installed and should continue following these instructions.
4. To install the compiler, follow the instructions [on this YouTube video](https://www.youtube.com/watch?v=sXW2VLrQ3Bs). Is this awkward? Yes. Is it worth it? Yes!
5. Check that it works by following steps 1--3 above.

## A2. Extra stuff we won't do

### Debugging

# Licence
This work is licensed under a [Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International Licence](http://creativecommons.org/licenses/by-nc-sa/4.0/).

# CM Hub: Introduction to C++
Introduction to C++ course for the CM Hub at Imperial College

* **Part 0:** Setting up C++
* **Part 1:** Hello world! Your first steps with C++
* **Part 2:** Functions
* **Part 3:** C++ with maths in mind

## Part 0. Setting up C++

**To do before coming to class. If you need some help completing this section, come to the pre-class drop-in at 00:00**

Before we start the class, you need to get C++ set up on your machine.

For some programming languages, like Matlab, there is just one program you need to open to write your code and then run it. For others, like C++, you will need one program to write your code, and then one program to 'compile' it: i.e., turn it into something you can run.

Before you come to class, you need to complete the following steps:

1. Have a text editor ready (we recommend [Atom](https://atom.io/))
2. Have a C++ compiler installed and working

### Step 1: Have a text editor ready
We are going to be writing our code in a text editor. This is a program which lets us produce plain text files. There are lots of choices available, but we recommend downloading [Atom](https://atom.io/).

### Step 2: Have a C++ compiler installed and working
A compiler is a program which takes the text file we have written and turns it into something we can run. Compilers do not look like normal programs, with windows and graphics. Instead they are run using the command line. We will discuss this in class but for now, follow the instructions below, depending on which type of machine you will use.

**If you have difficulties, come to the pre-class drop-in session.**

#### Instructions for Mac and Linux
1. Open Terminal.
2. Type `c++` and press Enter.
3. If it says `clang: error: no input files` or `c++: fatal error: no input files`, then you are ready to go. **If you get any other message, come to the pre-class drop-in session.**

#### Instructions for Windows (your own computer)
First let's check that you haven't already got a C++ compiler on your computer. If you have installed Fortran in the past, you might already have a C++ compiler.

1. Open Command Prompt from the Start menu (right-click the Start button and select Command Prompt).
2. Type `g++` and press Enter.
3. If you get the error `g++: fatal error: no input files`, then you are good to go. If you get a different message, you don't have a C++ compiler installed and should continue following these instructions.
4. To install the compiler, follow the instructions [on this YouTube video](https://www.youtube.com/watch?v=sXW2VLrQ3Bs). Is this awkward? Yes. Is it worth it? Yes!
5. Check that it works by following steps 1--3 above.

#### Instructions for Windows (college machine)

(For Krishna!)

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
* Steep learning curve
* Not obvious how best to use for science
* Difficult to debug

In short: C++ is a robust, fast language whose steep learning curve makes it worthwhile using for only large maths problems.

### 2. Getting ready

* Create a new folder somewhere
* Open up Terminal or Command Prompt and navigate to that folder using `cd`

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
(or `g++` on Windows)

* Then run the program
```bash
./hello
```

Try:
* Adding an extra line to the message

### 4. Use of variables
Join in:
* `int x;`
* `x = 4;`
* `cout << "The value of x is" << x << endl;`
* Compile and run.

Your turn:
* Change the code so it prints *2x* instead.
* Let *x* = 3.9. What do you expect to happen? What happens?

Join in:
* `double x;`
* `double y;`
* `cout << "The value of x is " << x << "and the value of y is" << y << endl;`
* Compile and run.

Your turn:
* Change the code so that it also prints out the product of *x* and *y*.

### 5. Command-line input
Join in:
* New file! `height.cpp`
```c++
#include <iostream>

using namespace std;

int main()
{
    string name;
    float height;
    cout << "What is your name?" << endl;
    cin >> name;
    cout << "What is your height?" << endl;
    cin >> height;
    cout << name << "is" << height << "metres tall."
    return 0;
}
```
* Compile and run.

Your turn:
* Convert the height into feet (1 metre = 3.28084 feet)
* Convert the height into feet and inches (1 foot = 12 inches). For example, entering 1.81 (metres) should produce "5 feet 11 inches". Hint: `a%b` = *a* mod *b*.
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
    float x;
    cout << "Enter a number" << endl;
    cin >> x;
    cout << "That number squared is" << pow(x,2) << endl;
    cout << "The square root of that number is" << sqrt(x) << endl;
    return 0;
}
```

Your turn:
* Add a line displaying the sine of the inputted number.
* Change the code so that it inputs two integers, *a* and *b*, and displays *a*/*b*.

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
* If the name of the customer does not equal your name, get the bartender to ask for money. Hint: `!=` is 'not equal to' in C++.

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
    for(int i=0; i<10; ++i){
        cout << pow(i,2) << endl;
    }
    return 0;
}
```

Try:
* Change the script to display the 3rd to 9th cubes.

Join in:
* Change the file: let's **comment out** the for loop above and instead write it as a while loop.
```c++
int i=3; // We can define and initialise a variable at the same time.
while(i<10){
    cout << pow(i,3) << endl;
    ++i;
}
```

Try:
* Change the script to display the 3rd, 5th, 7th and 9th cubes (i.e. go up in 2s, not in 1s)

Try:
* The Collatz conjecture: create a new script, `collatz.cpp`, which inputs a number *n*, and while *n* does not equal 1:
    * Let *f* = *n*/2 if *n* is even
    * Let *f* = 3*n* + 1 if *n* is odd
    * Let *n* = *f*


### End of day 1 challenge
* Create a program which .........





Cursed day or lucky day.

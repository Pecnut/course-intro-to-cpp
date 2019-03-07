# CM Hub: Introduction to C++
Introduction to C++ course for the CM Hub at Imperial College

* **Part 0:** Setting up C++
* **Part 1:** Hello world!
* **Part 2:** ?
* **Part 3:** ?

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

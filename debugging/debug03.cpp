#include <iostream>

using namespace std;

void main()
{
    // Prints out numbers that aren't multiples of 2 or 3
    int x = 0;
    while(x < 100){
        if (x%2!=0 && x%3!=0){
            cout << x << endl;
        }
        ++x;
    }

    return 0;
}

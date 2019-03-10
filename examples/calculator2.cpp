#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x;
    cout << "Enter a number" << endl;
    cin >> x;
    cout << "That number squared is " << pow(x,2) << endl;
    cout << "The square root of that number is " << sqrt(x) << endl;
    cout << "The sine of that number is " << sin(x) << endl;

    int a;
    int b;
    cout << "Enter an integer" << endl;
    cin >> a;
    cout << "Enter another integer" << endl;
    cin >> b;
    cout << "a/b" << " is " << a/b << endl;
    return 0;
}

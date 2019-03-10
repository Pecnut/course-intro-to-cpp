#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    float height;
    float height_in_feet;
    float height_in_inches;

    int height_in_inches_integer;
    int height_in_feet_and_inches_feet;
    int height_in_feet_and_inches_inches;
    cout << "What is your name?" << endl;
    cin >> name;
    cout << "What is your height?" << endl;
    cin >> height;
    cout << name << " is " << height << " metres tall." << endl;
    height_in_feet = height * 3.28084;
    cout << name << " is " << height_in_feet << " feet tall." << endl;
    height_in_inches = height_in_feet * 12;
    cout << name << " is " << height_in_inches << " inches tall." << endl;
    height_in_inches_integer = height_in_inches;
    height_in_feet_and_inches_feet = height_in_inches_integer / 12;
    height_in_feet_and_inches_inches = height_in_inches_integer % 12;
    cout << name << " is " << height_in_feet_and_inches_feet << " feet " << height_in_feet_and_inches_inches << " inches tall." << endl;

    return 0;
}

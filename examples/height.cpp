#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    float height;
    cout << "What is your name?" << endl;
    cin >> name;
    cout << "What is your height?" << endl;
    cin >> height;
    cout << name << " is " << height << " metres tall." << endl;
    return 0;
}

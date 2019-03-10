#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    string name;
    cout << "Welcome to the pub." << endl;
    cout << "What is your name?" << endl;
    cin >> name;
    cout << "What is your age?" << endl;
    cin >> age;
    if(age > 18){
        cout << "Have a pint!" << endl;
    } else if(age == 18){
        cout << "Show me your ID and then have a pint!" << endl;
    } else {
        cout << "I'm calling the police." << endl;
    }
    if(age >= 18){
        if(name != "Adam"){
            cout << "That will be £10 please." << endl;
        }
    }
    cout << "Goodbye!" << endl;
    return 0;
}

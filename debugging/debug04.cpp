#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Greets the person by name
    string name;
    cout << "What is your name?" << endl;
    cin << name;
    cout << greet(name) << endl;

    return 0;
}

string greet(string name){
    if (name == "Adam"){
        return "You're the best, " + name;
    } else {
        return "Oh it's you again is it, " + name + "?";
    }

}

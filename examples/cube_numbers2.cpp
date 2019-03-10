#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 10;
    /*
    for(int i=3; i<n; ++i){
        cout << pow(i,3) << endl;
    }
    */
    int i=3; // We can define and initialise a variable at the same time.
    while(i<n){
        cout << pow(i,3) << endl;
        //++i;
        i = i + 2;
    }
    return 0;
}

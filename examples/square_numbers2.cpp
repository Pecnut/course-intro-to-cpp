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

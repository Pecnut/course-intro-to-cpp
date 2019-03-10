#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 10;
    int square_numbers[10];
    int favourite_numbers[10] = {3, 1, -4, 1}; // Note we haven't defined them all.
;
    int magic_square[3][3] = {{4,9,2},{3,5,7},{8,1,6}};

    for(int i=0; i<n; ++i){
        square_numbers[i] = pow(i,2);
    }

    for(int i=0; i<n; ++i){
        cout << square_numbers[i] << endl;
    }
    for(int i=0; i<n; ++i){
        cout << favourite_numbers[i] << endl;
    }
    int max_favourite;
    max_favourite = *max_element(favourite_numbers,favourite_numbers+10);
    cout << "The largest favourite number is " << max_favourite << endl;

    return 0;
}

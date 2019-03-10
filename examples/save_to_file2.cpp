#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    ofstream myfile;
    myfile.open ("square_numbers.txt");
    //myfile.open ("square_numbers.txt", ios_base::app);
    for (int i=0; i<10; ++i){
        myfile << pow(i,2) << endl;
    }
    myfile.close();

    return 0;
}

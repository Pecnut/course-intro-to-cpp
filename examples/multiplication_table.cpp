#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int n = 10;
    int product[n][n];
    for(int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            product[i][j] = (i+1)*(j+1);
        }
    }
    for(int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            cout << product[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}

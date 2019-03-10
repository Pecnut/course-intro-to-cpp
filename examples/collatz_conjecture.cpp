#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int f;
    cout << "Input a number" << endl;
    cin >> n;
    while(n!=1){
        if(n%2==0){
            f = n/2;
        } else {
            f = 3*n+1;
        }
        n = f;
        cout << n << endl;
    }
    return 0;
}

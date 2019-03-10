#include <iostream>

using namespace std;

int sign_function(int n)
{
    int sign;
    if(n>0){
        sign = 1;
    } else if(n==0){
        sign = 0;
    } else {
        sign = -1;
    }
    return sign;
}

int absolute_value(int n)
{
    return abs(n);
}

int main()
{
    int n;
    n = 3;
    cout << sign_function(n) << endl;
    cout << absolute_value(n) << endl;
    return 0;
}

#include iostream

using namespace std;

int main()
{
    // Works out factorial

    int x = 5;
    int factorial = 1;
    while(x != 1){
        factorial *= x--;
    }
    cout << factorial << endl;

    return 0;
}

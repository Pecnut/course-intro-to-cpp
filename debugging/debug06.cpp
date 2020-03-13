#include <iostream>
#include <cmath>

using namespace std;

double c(double,double);

int main()
{
    // Creates Pythagorean triples
    for(int a=3;a<10;a++);
    {
        for(int b=a;b<10;b++);
        {
            cout << a << " " << b << " " << c(a,b) << endl;
        }
    }
    return 0;


double c(double a, double b){
    return sqrt(pow(a,2)+pow(b,2));
}

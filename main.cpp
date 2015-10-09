#include <iostream>
#include <cmath>

using namespace std;

double sqr (double x)
{
    return x*x;
}

int fib(int i)
{
return i==1? 1: i ==2? 2: fib(i-1) + fib(i-2);
}

int main()
{
    cout << 5*3 << ' ' <<10;
    cout << endl << "hello" << endl;
    cout << sin(1) << endl;
    cout << sqr(sqr (1.5));
    cout << fib (10) << endl;
    return 0;
}


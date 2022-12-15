#include <iostream>

using namespace std;
void main()
{
    double func(unsigned int n, double x)
    {
        if (n == 0)
            return 1;
        else
            return func(n - 1, x) * (1 - x * x / (2 * n + 1) / 2 / n);
    }
}
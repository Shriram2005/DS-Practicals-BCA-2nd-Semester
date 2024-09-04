// Factorial using recurssion
#include <iostream>
using namespace std;

int fib(int x)
{
    if ((x == 1) || (x == 0))
    {
        return (x);
    }
    else
    {
        return (fib(x - 1) + fib(x - 2));
    }
}
int main()
{
    int n;
    cout << "Enter the number of terms of series : ";
    cin >> n;
    cout << "\nFibonnaci Series : ";

    for (int i = 0; i < n; i++)
    {
        cout << fib(i) << " ";
    }

    return 0;
}
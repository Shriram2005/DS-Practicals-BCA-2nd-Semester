// Decimal Number to binary
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    stack<int> binaryStack;

    while (decimalNumber > 0)
    {
        int remainder = decimalNumber % 2;
        binaryStack.push(remainder);
        decimalNumber /= 2;
    }

    while (!binaryStack.empty())
    {
        cout << binaryStack.top();
        binaryStack.pop();
    }

    cout << endl;

    return 0;
}
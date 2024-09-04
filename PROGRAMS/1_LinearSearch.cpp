// Linear search
#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int value)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {12, 45, 65, 22, 44, 56, 34, 43};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 44;
    int index = LinearSearch(arr, size, value);

    if (index == -1)
    {
        cout << "Element not found.." << endl;
    }
    else
    {
        cout << "Element found at position = " << index;
    }
    return 0;
}
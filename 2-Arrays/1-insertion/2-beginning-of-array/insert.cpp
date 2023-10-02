/*
    Inserting at the beginning of an array.
*/
#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {2, 3, 4};
    int index = 0, length = 3, item = 1;
    for (int i = length; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = item;
    for (int i = 0; i < length + 1; i++)
    {
        cout << arr[i];
        if (i < length)
        {
            cout << ", ";
        }
    }
}

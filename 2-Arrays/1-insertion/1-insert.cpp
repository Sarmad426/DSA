/*
    In this code Example we are inserting an item at
    the 3rd index of this array.
*/
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 3, 5, 7, 8};
    int item = 10, index = 3, length = 5;
    int i = 0, j = length;
    length = length + 1;
    while (j >= index)
    {
        arr[j + 1] = arr[j];
        j -= 1;
    }
    arr[index] = item;
    cout << "[ ";
    for (i = 0; i < length; i++)
    {
        cout << arr[i] << ",";
    }
    cout << "]\n";
}
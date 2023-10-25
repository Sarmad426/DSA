#include <iostream>
using namespace std;
int linear_search(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter an element to search: " << endl;
    cin >> target;
    int result = linear_search(arr, n, target);
    if (result != 0)
    {
        cout << target << " found at index " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }
}

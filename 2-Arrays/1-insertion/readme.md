# Insertion Operation on Array

Insertion is adding an item in the array. It may be on the given index or at the end of an array.

> Let arr be unordered array with N elements and k is positive integer such that k<=n.
> Following the algorithm where item.

## Pseudo Code Algorithm

```pseudo code

1.  START
2.  Set j = n
3.  Set n = n+1
4.  Repeat step 5 & 6 while j >= k
5.  arr[j+1] = arr[j]
6.  j = j-1
7.  arr[k] = item
8.  STOP
```

## C++ code Example:

```cpp

#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,3,5,7,8};
    int item=10, index=3, length=5;
    int i=0, j=length;
    length=length+1;
    while(j>=index){
        arr[j+1] =  arr[j];
        j-=1;
    }
    arr[index] = item;
    cout<<"[ ";
    for(i=0;i<length;i++){
        cout<<arr[i]<<",";
    }
    cout<<"]\n";
}
```

### Code Explain

In this code we inserted an item at a specific index in this array.

- `item=10` is the value that is inserted.
- `index=3` is the index where the item is inserted.
- `length=5` it the length of the array.

So, we inserted `item=10` at the `index=3`.

### Insert at the beginning

> When the insertion happens at the beginning, it causes all the existing data items to shift one step downward. Here, we design and implement an algorithm to insert an element at the beginning of an array.

### Pseudo Algorithm

``` pseudo
    begin
IF N = MAX, return
ELSE
 N = N + 1
 
 For All Elements in A
 Move to next adjacent location
 
 A[FIRST] = New_Element
 
end 
```

### C++ code Example

```cpp
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
    cout<<"[";
    for (int i = 0; i < length + 1; i++)
    {
        cout << arr[i];
        if (i < length)
        {
            cout<< ", ";
        }
    }
    cout<<"]"<<endl;
}
```

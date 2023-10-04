# Update Operation

Update operation is to update a value in an array. The value can be updated on the basis of its index or by its value.

## Algorithm

```pseudo
START

arr[k-1]=item

STOP
```

## C++ code

```c++
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int n=5, k=3, item=10;
    arr[k-1] = item;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
}
```

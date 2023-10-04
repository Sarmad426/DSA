# Deletion

Deleting an item from an array removes an item from the array on a specific index. Other items are then re-organized.

## Algorithm

Consider `arr` is a linear array with `n` elements and `k` is a positive integer such that `K<=N`. k is the index from the value is to be removed.

> Following is the algorithm to delete an element available at the Kth position of arr.

``` pseudo
1. Start
2. Set j=k
3. Repeat steps 4 and 5 while j < n
4. Set arr[j-1] = arr[j]
5. Set j = j+1
6. Set n = n-1
7. Stop
```

## C++ code Example

```cpp
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,8,3,4};
    int length=5,index=3;
    int j=index;
    while(j<length){
        arr[j-1] = arr[j];
        j+=1;
    }
    length-=1;
    cout<<"After Deletion: "<<endl;
    cout<<"[";
    for(int i=0;i<length;i++){
        cout<<arr[i];
        if(i<length-1){
            cout<<",";
        }
    }
    cout<<"]";
}

```

**Explanation:** In this code example we have removed the 2nd index where value is `8`.

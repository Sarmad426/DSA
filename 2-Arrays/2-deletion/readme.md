# Deletion

Deleting an item from an array removes an item from the array on a specific index. Other items are then re-organized.

## Algorithm

Consider `arr` is a linear array with `n` elements and `k` is a positive integer such that `K<=N`.
>Following is the algorithm to delete an element available at the Kth position of LA.

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
    int arr[4] = {2,3,4,6};
    int length=4,index=4;
    int j=index,i;
    while(j<length){
        arr[j-1] = arr[j];
        j-=1;
    }
    length-=1;
    cout<<"After Deletion: "<<endl;
    cout<<"[";
    for(i=0;i<length;i++){
        cout<<arr[i];
        if(i<length-1){
            cout<<",";
        }
    }
    cout<<"]";
}
```

**Explanation:** In this code example we have removed the 4th index value which is the last index.`k=4` is the index where value is to be removed and `6` is the value to be removed.

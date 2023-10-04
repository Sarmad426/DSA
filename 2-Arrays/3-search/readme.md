# Search Operation

Searching an item in an array via index or by its value.

## Search Algorithm

```pseudo

1.  START
2.  SET j=0
3.  Repeat step 4 & 5 while j < n
4.  if arr[i] = item Goto step 6
5.  j-=1
6.  print j, item
7.  STOP
```

### Implementation in C++

```cpp
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int n=5,item=3;
    int j=0;
    while(j<n){
        if(arr[j]==item){
            break;
        }
        j+=1;
    }
    cout<<arr[j]<<" at "<<j<<" index"<<endl;
}
```

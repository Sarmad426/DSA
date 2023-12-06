# Insertion Sort

Insertion sort is a simple and efficient sorting algorithm that works by comparing and inserting elements into a sorted sub-list. In this document, I will explain how insertion sort works, its algorithm, and its advantages and disadvantages.

## How Insertion Sort Works³[3]

Insertion sort works by dividing the input array into two parts: a sorted sub-list and an unsorted sub-list⁴[4]. Initially, the sorted sub-list contains only the first element of the input array, and the unsorted sub-list contains the rest of the elements.

The algorithm then iterates over the unsorted sub-list, and for each element, it finds its correct position in the sorted sub-list and inserts it there. This process is repeated until the unsorted sub-list is empty and the sorted sub-list contains all the elements of the input array⁵[5].

The following animation shows how insertion sort works on an example array of eight elements.

![Insertion Sort Animation]

## Insertion Sort Algorithm

The algorithm for insertion sort can be written as follows:

- Step 1: If the input array has only one element, it is already sorted⁶[6]⁷[7]. Return the array.
- Step 2: Pick the second element of the input array and compare it with the first element. If it is smaller, swap them⁸[8]. Otherwise, leave them as they are. The first two elements are now sorted⁹[9].
- Step 3: Pick the third element of the input array and compare it with the second element. If it is smaller, swap them⁸[8]. Then compare it with the first element. If it is smaller, swap them⁸[8]. Otherwise, leave them as they are. The first three elements are now sorted⁹[9].
- Step 4: Repeat step 3 for the remaining elements of the input array, until all the elements are sorted.

The following pseudo-code shows the implementation of insertion sort in a generic programming language.

```pseudo
procedure insertionSort(A : array of items)¹¹[11]
   n : size of A
   for i = 1 to n - 1 do:¹²[12]
      // select the value to be inserted¹³[13]
      valueToInsert = A[i]¹⁴[14]¹⁵[15]
      holePosition = i¹[1]¹⁶[16]
      // locate the hole position for the element to be inserted¹⁷[17]
      while holePosition > 0 and A[holePosition - 1] > valueToInsert do:¹⁸[18]
         // shift the element
         A[holePosition] = A[holePosition - 1]²[2]
         holePosition = holePosition - 1²[2]¹[1]
      end while
      // insert the value at the hole position²¹[21]
      A[holePosition] = valueToInsert²²[22]
   end for
end procedure
```

## Advantages and Disadvantages of Insertion Sort

Some of the advantages of insertion sort are:

- It is simple and easy to implement.
- It is efficient for small data sets or data sets that are already partially sorted.
- It is stable, meaning that it preserves the relative order of equal elements.
- It is adaptive, meaning that it reduces the number of comparisons and shifts if the input array is already sorted or nearly sorted²³[23].
- It is in-place, meaning that it does not require extra space for sorting²⁴[24].

Some of the disadvantages of insertion sort are:

- It is not efficient for large data sets, as its average and worst case time complexity are O(n^2), where n is the number of elements in the input array²⁵[25]²⁶[26].
- It is not suitable for data sets that are randomly ordered or in reverse order, as it will perform the maximum number of comparisons and shifts.

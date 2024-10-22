# Quick Sort

**Quick Sort** is a highly efficient, comparison-based sorting algorithm that follows the **divide and conquer** approach. It works by selecting a "pivot" element from the array and partitioning the other elements into two groups: those smaller than the pivot and those larger. The pivot is then placed in its correct sorted position. This process is recursively applied to the subarrays formed by partitioning until the entire array is sorted.

Quick Sort is favored for its average-case efficiency and in-place sorting nature, meaning it doesn't require additional storage beyond what's needed for the input array.

## Key Characteristics

- **Divide and Conquer**: Breaks the problem into smaller subproblems (subarrays).
- **In-place**: No need for extra memory (unlike Merge Sort).
- **Recursive**: Recursively applies sorting to the smaller parts of the array.
  
### Time Complexity (Big O)

- **Best Case**: `O(n log n)`  
  When the pivot element consistently divides the array into two nearly equal halves.
  
- **Average Case**: `O(n log n)`  
  On average, the array is split into reasonably balanced parts.
  
- **Worst Case**: `O(n²)`  
  Occurs when the pivot consistently results in unbalanced partitions, such as when the array is already sorted or reverse sorted and the smallest or largest element is chosen as the pivot.

### Space Complexity

- **O(log n)** for recursion stack space when implementing the in-place version.

### When to use

Quick Sort is ideal when:

- You want **in-place sorting**.
- Average performance is more important than worst-case scenarios (e.g., randomized input).

# Vector

The vector library in C++ provides a dynamic array-like container that can resize itself automatically when elements are inserted or removed. It offers several benefits over traditional arrays, such as:

1. Dynamic Size: Vectors can grow or shrink in size as needed, eliminating the need to manually manage memory allocation.

2. Easy Element Access: Elements can be accessed using the subscript operator [], making it simple to retrieve or modify specific elements.

3. Efficient Insertion and Removal: Vectors provide efficient insertion and removal operations at the end of the container. They also support operations like inserting or removing elements at any position, although those are relatively slower.

4. Range Checking: Vectors perform bounds checking automatically, ensuring that accessing elements within valid bounds.

Here's a simple code snippet to demonstrate the usage of the vector library in C++:

```cpp
#include <iostream>
#include <vector>

int main() {
    // Create an empty vector of integers
    std::vector<int> numbers;

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Access elements using the subscript operator
    std::cout << "First element: " << numbers[0] << std::endl;
    std::cout << "Second element: " << numbers[1] << std::endl;

    // Modify an element
    numbers[2] = 40;

    // Iterate over the vector using a range-based for loop
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Get the size of the vector
    std::cout << "Size of the vector: " << numbers.size() << std::endl;

    // Remove the last element
    numbers.pop_back();

    // Check if the vector is empty
    if (numbers.empty()) {
        std::cout << "Vector is empty" << std::endl;
    } else {
        std::cout << "Vector is not empty" << std::endl;
    }

    return 0;
}
```

In the above code, we include the `<vector>` header to use the vector library. We create an empty vector of integers called `numbers` and use the `push_back()` function to add elements to it. We access and modify elements using the subscript operator []. We can iterate over the vector using a range-based for loop. The `size()` function returns the size of the vector, and `pop_back()` removes the last element. Finally, we check if the vector is empty using the `empty()` function.

# Data Structures

Data Structure is a systematic way to organize data in order to use it efficiently. It consists of two fundamental components:

## Interface

Each data structure has an interface that represents the set of operations it supports. This interface includes:

- List of supported operations
- Type of parameters these operations accept
- Return type of these operations

## Implementation

Implementation provides:

- Internal representation of the data structure
- Definition of algorithms used in its operations

### Characteristics of a Data Structure

Data structures should possess the following characteristics:

- **Correctness**: Data structure implementation should correctly adhere to its interface.

- **Time Complexity**: The running time or execution time of operations on the data structure should be minimized.

- **Space Complexity**: Memory usage of data structure operations should be minimized.

### Need for Data Structures

As applications become more complex and data-rich, three common problems arise:

1. **Data Search**: Searching for items in a large dataset becomes inefficient. For example, searching for an item in a store's inventory of one million items slows down the search process.

2. **Processor Speed**: Even with high processor speed, it becomes limited when dealing with billion-record datasets.

3. **Multiple Requests**: Web servers experience performance issues when thousands of users simultaneously search for data.

To address these problems, data structures come to the rescue by organizing data in a way that allows for quick and efficient data retrieval.

## Execution Time Cases

Comparing data structure execution times involves considering three cases:

1. **Worst Case**: This scenario represents the maximum time an operation can take, denoted as ƒ(n). The operation will not exceed ƒ(n) time.

2. **Average Case**: This scenario reflects the average execution time of an operation. If an operation takes ƒ(n) time, then m operations will take mƒ(n) time.

3. **Best Case**: This scenario represents the minimum possible execution time of an operation. If an operation takes ƒ(n) time, the actual time may be a random number, but it won't exceed ƒ(n).

## Basic Terminology

- **Data**: Values or sets of values.
- **Data Item**: A single unit of values.
- **Group Items**: Data items divided into sub-items.
- **Elementary Items**: Data items that cannot be divided further.
- **Attribute and Entity**: An entity contains attributes or properties with assigned values.
- **Entity Set**: Entities with similar attributes form an entity set.
- **Field**: A single elementary unit of information representing an entity's attribute.
- **Record**: A collection of field values for a given entity.
- **File**: A collection of records for entities within a specific entity set.

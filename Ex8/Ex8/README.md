# Assignment 8 - Implementation of Iterators

## Overview
This assignment is centered around utilizing iterators to showcase vertex points on the console and write the vertex to file. The primary objective is to define an iterator type for a vector of triangles and then iterate through the vector to display the coordinates of each vertex.

## Implementation

### Iterator Type Definition in `Writer.cpp`
In the `\Ex8\src\Writer.cpp` file, the iterator type is explicitly defined for a vector of triangles within the `write` function.

### Explicit Declaration of Iterator Type
The iterator type is explicitly declared as `std::vector<Triangle>::iterator`.

### Iterating Through Vector of Triangles
- The iterator is employed in a for loop to traverse the vector of triangles.
- For each triangle, the vertex points (p1, p2, and p3) are written to file using the iterator.
- For each triangle, the vertex points (p1, p2, and p3) are printed to the console using the iterator.

### Iterator Values and Output
- The iterator values are accessed using the `*itr` notation, which dereferences the iterator.
- The coordinates of each vertex are then printed using the dereferenced iterator.

The provided code snippet exemplifies the implementation:

```cpp
for (std::vector<Triangle>::iterator itr = triangles.begin(); itr != triangles.end(); ++itr)
{
    std::cout << (*itr).p1().x() << " " << (*itr).p1().y() << " " << (*itr).p1().z() << std::endl;
    std::cout << (*itr).p2().x() << " " << (*itr).p2().y() << " " << (*itr).p2().z() << std::endl;
    std::cout << (*itr).p3().x() << " " << (*itr).p3().y() << " " << (*itr).p3().z() << std::endl;
}
```
```
for (std::vector<Triangle>::iterator itr = triangles.begin(); itr != triangles.end(); ++itr)
  {
    dataFile << (*itr).p1().x() << " " << (*itr).p1().y() << " " << (*itr).p1().z() << std::endl;
    dataFile << (*itr).p2().x() << " " << (*itr).p2().y() << " " << (*itr).p2().z() << std::endl;
    dataFile << (*itr).p3().x() << " " << (*itr).p3().y() << " " << (*itr).p3().z() << std::endl;
    dataFile << (*itr).p1().x() << " " << (*itr).p1().y() << " " << (*itr).p1().z() << std::endl;
  }
```

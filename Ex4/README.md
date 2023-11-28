# Assignment4: File Handling in C++ Part2

## Overview
This assignment  implementing file handling in C++ to read and process triangle data from a file, with the implementation divided into two files: `Reader.cpp` and `Writer.cpp`. The specified tasks involve employing the `getline()` function, utilizing `istringstream` for string parsing, creating instances of `Point3D`, and populating a vector with `Triangle` objects. Additionally, the assignment includes the specific instruction to read only the vertex values from a `.stl` file.

## Implementation Steps

1. **Implemented getline() function in getTriangles() in location `Ex4\Updated Sketchers\src\Reader.cpp`**.
2. **Implemented `if condition`  to read only vertex value from .stl file in location `Ex4\Updated Sketchers\src\Reader.cpp`.**
3. **Used an istringstream to parse the string in location `Ex4\Updated Sketchers\src\Reader.cpp`**.
4. **Taken all values and pass each (x, y, z) values to the point3D class object in location `Ex4\Updated Sketchers\src\Reader.cpp`**.
5. **Added that object in the Triangle class type vector in location `Ex4\Updated Sketchers\src\Reader.cpp`**.
6. **Used a range-for loop to write the data from each object of Triangle stored in vector triangles in location `Ex3\src\Writer.cpp`**.


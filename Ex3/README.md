# Assignment3: File Handling in C++ Part1

## Overview

This task requires the utilization of file handling in C++ for reading and processing triangle data from a file. The implementation is divided into two files: `Reader.cpp` and `Writer.cpp`. The tasks involve employing the `getline()` function, utilizing `istringstream` for string parsing, creating instances of `Point3D`, and populating a vector with `Triangle` objects.

## Implementation Steps

1. **Implemented getline() function in getTriangles() in location `Ex3\src\Reader.cpp`**.
2. **Used an istringstream to parse the string in location `Ex3\src\Reader.cpp`**.
3. **Taken all values and pass each (x, y, z) values to the point3D class object in location `Ex3\src\Reader.cpp`**.
4. **Added that object in the Triangle class type vector in location `Ex3\src\Reader.cpp`**.
**Used a range-for loop to write the data from each object of Point3d stored in  vector points in location `Ex3\src\Writer.cpp`**.
**Used a range-for loop to write the data from each object of Triangle stored in vector triangles in location `Ex3\src\Writer.cpp`**.
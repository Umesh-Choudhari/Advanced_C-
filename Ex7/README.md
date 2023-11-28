# Assignment 7: Genralized capture with initialization

## Overview

In this assignment, a lambda expression named `displayFileNotFound` has been implemented in the `Reader.cpp` and `Writer.cpp` file with `Genralized capture with initialization`.The purpose of this lambda expression is to provide a message indicating that the file was not found.

## Implementation Steps

1. **Implemented a lambda expression `getTriangles` function in location `Ex6\Updated Sketchees\src\Reader.cpp`**.
1. **Implemented a lambda expression `Write` function in location `Ex6\Updated Sketchees\src\Writer.cpp`**.
   ```
    std::string msg="Error Message";
    auto printMsgFileNotFound = [msg = "File not found"]()mutable
    {
        return msg;
    };
    ```
    ```
    ```

2. **Defined `displayFileNotFound` with `Genralized capture with initialization` as `[msg = "File not found"]` for `Reader.cpp`**.
3. **Defined `displayFileNotFound` with `Genralized capture with initialization` as `[msg = "Unable to open the file in write mode"]` for `Writer.cpp`.**
4. **This expression returns string to print `File not found` on the console if file was not found.**
5. **This expression returns string to print `Unable to open the file in write mode` on the console if file was unble to open the file in write mode.**



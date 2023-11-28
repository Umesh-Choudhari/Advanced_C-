# Assignment 5: Implementation of Lambda Function

## Overview

Within this assignment, a lambda expression named `displayFileNotFound` has been incorporated in the `Reader.cpp` file. The objective of this lambda expression is to deliver a message indicating the absence of the specified file.

## Implementation Steps

1. **Implemented a lambda expression in `Ex5\Updated Sketchees\src\Reader.cpp`**.
2. **Implemented a lambda expression in `Ex5\Updated Sketchees\src\Writer.cpp`**.

   ```
   cpp
   auto displayFileNotFound = []() {
       std::string msg = "File not found";
       return msg;
   };
    
    ```
    ```
    auto displayFileNotFound = []()
    {
        std::string msg = "Unable to open the file";
        return msg;
    };
    ```
3. **This expression returns string to print `File not found` on the console.**
4. **This expression returns string to print `Unable to open the file` on the console.**



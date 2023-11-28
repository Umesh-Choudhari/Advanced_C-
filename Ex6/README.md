# Assignment 6: Implementation of Lambda Function with capture clause and mutable.

## Overview

In this assignment, a lambda expression named `displayFileNotFound` has been implemented in the `Reader.cpp` file with capture clause and `mutable` keyword.The purpose of this lambda expression is to provide a message indicating that the file was not found.


Within the context of this assignment, there exists a lambda expression named `displayFileNotFound` in the `Reader.cpp` and `Writer.cpp` file. Notably, this lambda expression incorporates a capture clause and utilizes the `mutable` keyword. Its fundamental purpose is to articulate a message that denotes the absence of the designated file.

## Implementation Steps

1. **Implemented a lambda expression `getTriangles` function in location `Ex6\Updated Sketchees\src\Reader.cpp`**.
2. **Implemented a lambda expression `write` function in location `Ex6\Updated Sketchees\src\Writer.cpp`**.

   ```std::string msg="Error Msg";
    auto displayFileNotFound = [msg]()mutable
    {
        msg = "File not found";
        return msg;
    };```

    ```std::string msg="Error Msg";
    auto displayFileNotFound = [msg]() mutable
    {
        msg = "Unable to open a file";
        return msg;
    };
    ```

2. **We used mutable keyword in order to specify that the variables in the capture clause be `mutable` not `const`**.
3. **Due to mutable keyword the value of string got changed from `std::string msg = "Error msg"`  to `std::msg = "File not found"`**, 
   **`std::msg = "Unable to open a file"`**
4. **This expression returns string to print `File not found` on the console if file was not found.**
4. **This expression returns string to print `Unable to open a file` on the console if can not open the file for write mode**.



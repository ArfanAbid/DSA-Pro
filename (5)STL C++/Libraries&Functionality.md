# Commonly Used C++ Libraries and Functions for DSA and Leetcode Questions

### `<iostream>`
- **Purpose**: Input/Output operations.
- **Common Functions**:
  - `cin`: Standard input stream.
  - `cout`: Standard output stream.

### `<cctype>`
- **Purpose**: Character handling.
- **Common Functions**:
  - `tolower(int c)`: Converts a character to lowercase. **Returns**: `int` (the lowercase version or unchanged if not alphabetic).
  - `toupper(int c)`: Converts a character to uppercase. **Returns**: `int` (the uppercase version or unchanged if not alphabetic).
  - `isalnum(int c)`: Checks if a character is alphanumeric. **Returns**: `int` (non-zero if true, 0 if false).
  - `isalpha(int c)`: Checks if a character is alphabetic. **Returns**: `int` (non-zero if true, 0 if false).

### `<vector>`
- **Purpose**: Dynamic arrays.
- **Common Functions**:
  - `push_back(const T&)`: Adds an element to the end. **Returns**: `void`.
  - `pop_back()`: Removes the last element. **Returns**: `void`.
  - `size()`: Returns the size of the vector. **Returns**: `size_t`.
  - `empty()`: Checks if the vector is empty. **Returns**: `bool`.

### `<algorithm>`
- **Purpose**: Contains various algorithms like sorting, searching, etc.
- **Common Functions**:
  - `sort(start, end)`: Sorts elements in a range. **Returns**: `void`.
  - `binary_search(start, end, value)`: Searches for a value in a sorted range. **Returns**: `bool`.
  - `reverse(start, end)`: Reverses the elements in a range. **Returns**: `void`.
  - `min(a, b)`: Returns the minimum of two values. **Returns**: Same type as inputs.
  - `max(a, b)`: Returns the maximum of two values. **Returns**: Same type as inputs.
  - `next_permutation(start, end)`: Generates the next lexicographical permutation. **Returns**: `bool`.

### `<cmath>`
- **Purpose**: Math functions.
- **Common Functions**:
  - `pow(double x, double y)`: Returns `x` raised to the power `y`. **Returns**: `double`.
  - `sqrt(double x)`: Returns the square root of `x`. **Returns**: `double`.
  - `abs(int x)`: Returns the absolute value of `x`. **Returns**: `int`.
  - `ceil(double x)`: Rounds up to the nearest integer. **Returns**: `double`.
  - `floor(double x)`: Rounds down to the nearest integer. **Returns**: `double`.

### `<string>`
- **Purpose**: String manipulation.
- **Common Functions**:
  - `length()`: Returns the length of the string. **Returns**: `size_t`.
  - `substr(size_t start, size_t length)`: Returns a substring. **Returns**: `std::string`.
  - `find(const std::string& substring)`: Returns the position of the first occurrence of a substring. **Returns**: `size_t` or `npos` if not found.
  - `erase(size_t pos, size_t len)`: Erases part of a string. **Returns**: `std::string&`.

### `<map>`
- **Purpose**: Associative containers storing key-value pairs in sorted order.
- **Common Functions**:
  - `insert(const std::pair<Key, Value>&)`: Inserts a key-value pair. **Returns**: `std::pair<iterator, bool>`.
  - `find(const Key&)`: Finds an element by its key. **Returns**: `iterator`.
  - `erase(const Key&)`: Erases an element by its key. **Returns**: `size_t`.

### `<set>`
- **Purpose**: Stores unique elements in a sorted order.
- **Common Functions**:
  - `insert(const T&)`: Inserts a value. **Returns**: `std::pair<iterator, bool>`.
  - `find(const T&)`: Searches for a value. **Returns**: `iterator`.
  - `erase(const T&)`: Removes a value. **Returns**: `size_t`.

### `<queue>`
- **Purpose**: First-in, first-out (FIFO) structure.
- **Common Functions**:
  - `push(const T&)`: Adds an element to the back. **Returns**: `void`.
  - `pop()`: Removes the front element. **Returns**: `void`.
  - `front()`: Accesses the front element. **Returns**: `T&`.

### `<stack>`
- **Purpose**: Last-in, first-out (LIFO) structure.
- **Common Functions**:
  - `push(const T&)`: Adds an element to the top. **Returns**: `void`.
  - `pop()`: Removes the top element. **Returns**: `void`.
  - `top()`: Accesses the top element. **Returns**: `T&`.

### `<deque>`
- **Purpose**: Double-ended queue.
- **Common Functions**:
  - `push_front(const T&)`: Adds an element to the front. **Returns**: `void`.
  - `push_back(const T&)`: Adds an element to the back. **Returns**: `void`.
  - `pop_front()`: Removes the front element. **Returns**: `void`.
  - `pop_back()`: Removes the back element. **Returns**: `void`.

### `<unordered_map>`
- **Purpose**: Stores key-value pairs without any specific order.
- **Common Functions**:
  - `insert(const std::pair<Key, Value>&)`: Inserts a key-value pair. **Returns**: `std::pair<iterator, bool>`.
  - `find(const Key&)`: Finds an element by its key. **Returns**: `iterator`.
  - `erase(const Key&)`: Erases an element by its key. **Returns**: `size_t`.

### `<climits>`
- **Purpose**: Defines limits of integral types.
- **Common Constants**:
  - `INT_MAX`: Maximum value for an integer.
  - `INT_MIN`: Minimum value for an integer.

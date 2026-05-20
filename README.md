# C String Utility Library

A lightweight, **C string manipulation library** providing a comprehensive set of functions for handling strings safely and efficiently.  
Inspired by higher-level languages like Python, this library gives you **dynamic allocation, string slicing, searching, trimming, and more** — all in pure C.
**Intended for learning, experimentation, and general-purpose use.**

---

## Compatibility

This library is **fully compatible with C++** when used with **C-style strings (`char*`)**.  
All identifiers avoid C++ reserved keywords, and the API is safe to include in `.cpp` files.

> Note: This is a C library — no STL, no `std::string`, no C++ abstractions.

---

## Features

- **Fundamental operations**
  - string_length, string_duplicate, string_equals, string_compare, string_free
- **Validation helpers**
  - string_index_valid, string_range_valid, string_is_numeric, string_is_alpha, string_is_alnum, string_is_empty
- **Searching & lookup**
  - string_find, string_find_char, string_contains, string_count, string_count_char, string_starts_with, string_ends_with
- **Substring & slicing**
  - string_substring, string_substring_range
- **Case conversion & transformations**
  - string_to_lower, string_to_upper, string_reverse, string_sort
- **Trims & whitespace**
  - string_ltrim, string_rtrim, string_trim
- **Construction & modification**
  - string_append, string_insert, string_replace, string_repeat, string_pad_left, string_pad_right
- **Removal operations**
  - string_pop_back, string_pop_front, string_remove_char, string_remove_range, string_remove_first, string_remove_all
- **Replacement & joining**
  - string_replace_first, string_replace_all, string_join
- **Tokenization**
  - string_split
- **Accessor operations**
  - string_char_at

---

## Installation

**Clone the repository and include the library in your project:**

**git clone:** https://github.com/Sachit557/String-Utils-C.git
cd c-string-library

Include the header in your C source file:

```c
#include "string_utils.h"
```

Compile with your source:

```
gcc main.c string_utils.c -o my_program
```

---

## Usage

```c
#include <stdio.h>
#include "string_utils.h"

int main() {
    char *original = "  Hello World  ";

    char *trimmed = string_trim(original);
    printf("Trimmed: '%s'\n", trimmed);

    char *upper = string_to_upper(trimmed);
    printf("Uppercase: '%s'\n", upper);

    char *reversed = string_reverse(upper);
    printf("Reversed: '%s'\n", reversed);

    char *appended = string_append(trimmed, " C Library");
    printf("Appended: '%s'\n", appended);

    char *removed = string_remove_all(appended, "Hello");
    printf("Removed 'Hello': '%s'\n", removed);

    char ch = string_char_at("Hello", 1);
    printf("%c\n", ch);

    string_free(trimmed);
    string_free(upper);
    string_free(reversed);
    string_free(appended);
    string_free(removed);

    return 0;
}

```

---

## Memory Management

All functions that **allocate new memory** return a pointer that **must be freed** using **string_free** to avoid memory leaks.  
Functions that only **read or validate** strings do not allocate memory.

---

## License:

This project is licensed under the MIT License. See the [LICENSE](./LICENSE)
file for details.

---

## Contributing

**Contributions, bug fixes, and improvements are welcome!**

Steps:

1. Fork the repository
2. Make changes in a branch
3. Submit a pull request

Please follow consistent naming (string\_\*) and document each function clearly.

---

## TODO / Known Issues

- Some functions may have edge cases with empty strings or NULL pointers — check documentation before use

---

## Design Philosophy

This library is **hand-written and intentionally designed**, not auto-generated or "vibe-coded".  
Each function is implemented with explicit control over memory, clarity of behavior, and predictable performance.

---

## Acknowledgements

Inspired by Python string handling and modern C memory safety practices.

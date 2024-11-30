# ft_printf

## Overview
`ft_printf` is a custom implementation of the standard `printf` function in C. It is part of a project at 42 School designed to enhance your understanding of variadic functions, formatted output, and low-level memory management. This project replicates the behavior of `printf`, handling multiple format specifiers and ensuring a robust, efficient implementation.

## Status
Finished: 19/11/2024. Grade: 100/100.

## Features
- Supports the following format specifiers:
  - `%c` for characters
  - `%s` for strings
  - `%p` for pointers
  - `%d` and `%i` for signed integers
  - `%u` for unsigned integers
  - `%x` and `%X` for hexadecimal numbers (lowercase and uppercase, respectively)
  - `%%` for the percentage sign
- Modular code structure with individual handlers for each specifier
- Thorough management of edge cases and memory handling

## Functionality
The core function of the project is `ft_printf`, which processes the input format string and arguments to produce formatted output.

### Function Details
#### `ft_printf`
```c
int ft_printf(const char *fm, ...);
```
- **Parameters**:
  - `fm`: The format string containing text and specifiers.
  - Variadic arguments corresponding to the specifiers in the format string.
- **Return Value**: Total number of characters printed.

#### `ft_dispatcher`
Handles the logic for selecting the correct handler function based on the format specifier.
```c
int ft_dispatcher(char c, va_list *args);
```
- **Parameters**:
  - `c`: The current format specifier.
  - `args`: The variadic argument list (address passed to allow modification and iteration through arguments within the called functions).
- **Return Value**: Length of the printed output for the given specifier.

## File Structure
- **`ft_printf.c`**: Contains the `ft_printf` function and the main loop to process the format string.
- **`ft_dispatcher.c`**: Implements logic for handling format specifiers.
- **Handlers** (e.g., `ft_handler_c`, `ft_handler_s`): Modular functions for each specifier.
- **Utilities**: Helper functions for string manipulation, memory allocation, etc.

## Testing
To compile and test the project, a `main.c` file is provided for convenience. Run the following command:
```sh
make exe
```
This will create an executable that uses `ft_printf` with example use cases from `main.c`.

## License
This project is developed as part of 42 School and follows its guidelines. Redistribution and use are allowed under the same terms.

---
**Author**: macuesta  
**Last Updated**: 30/11/2024

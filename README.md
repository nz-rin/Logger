## Simple C++ Logger for Development

This is a simple headerfile only that logs any type of data that C++ compiler can print in ostream.
To use it just include the headerfile and call the functions listed below.
Note, This header file was created to make print info and debugging during development easier,
using it in an end user product my result in slowness and wierd formatting in the terminal.
also this code its ment to "just work", so there my be wierd or undefined behaviour depending on what you do.

### Compile and run the example.cxx and inspect the code and its output to understand its useage better.

- **void log_info(__thing to print__)**
    Prints a single message into std out and includes new line.

- **void log_info_noln(_thing to print_)**
    Prints a single message into std out and without new line.

- **void log_info(_thing to print_)**
    Prints to std out. Function handles variadic arguments of any type and adds new line at end.
    NOTE, each argument is automaticly seperate by a SINGLE space " ".

- **void log_error(_thing to print_)**
    Prints a single message into std err and includes new line.

- **void log_error(_thing to print_)**
    Prints to std err. Function handles variadic arguments of any type and adds new line at end.
    NOTE, each argument is automaticly seperate by a SINGLE space " ".

- **void log_error_and_exit(_thing to print_)**
    Prints to std err. Function handles variadic arguments of any type and adds new line at end.
    Afterwards the function Exits the program with EXIT_FAILURE.
    NOTE, each argument is automaticly seperate by a SINGLE space " ".

- **void log_error_and_exit(_thing to print_)**
    Prints a single message into std err and includes new line.
    Afterwards the function Exits the program with EXIT_FAILURE.


- **void log_error_and_sterror(_thing to print_)**
    Prints a single message into std err.
    The function also prints the current errno.
    Adds a new line at the end.


- **void log_error_and_sterror_and_exit(_thing to print_)**
    Prints a single message into std err.
    The function also prints the current errno.
    Adds a new line at the end.
    Afterwards the function Exits the program with EXIT_FAILURE.

- **void log_clear_formatting(_thing to print_):**
    Quick function that removes any ostream formatting from std out and err.

- **void log_ln()**
    prints a newline in std out

- **void log_ln_err()**
    prints a newline in std err

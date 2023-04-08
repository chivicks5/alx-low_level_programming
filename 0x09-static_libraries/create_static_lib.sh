#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c

# Create a static library from the object files
ar rcs liball.a *.o

# Generate an index of symbols in the library
ranlib liball.a

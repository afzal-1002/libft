# Libft
This project, a key milestone in 42 School, is my custom C library (libft). It includes personal implementations of many libc functions and additional utilities, custom-built to comply with 42’s rules where the standard C library is forbidden. Starting with basics like memcpy(), strlen(), etc., this library has evolved to include powerful tools for future projects.

## Compilation:
### Build the Library:
make or make libft → Compiles libft.a.
make clean → Removes temp files, keeping libft.a.
make fclean → Removes all generated files.
make re → Rebuilds everything.
Include in Your Project:

# include <libft.h>
Compile with -I /libft/includes -L /libft -lft.

#### Debugging:
make debug → Builds libftdebug.a with debug-friendly flags.
#### Testing:
Write your test in /test/test.c.
Run make test to build and debug /test/test.
## Notes:
If you’re new to 42, write your Makefile (CMake is not allowed initially).
For 42 students, all code follows the Norm guideline

*This project has been created as part of the 42 curriculum by rthanett.*

# Libft

## Description
**Libft** is the foundational project of the 42 curriculum. The goal of this project is to re-create a comprehensive suite of standard C library (`libc`) functions from scratch, as well as additional non-standard utility functions for advanced string manipulation, memory management, file descriptor output operations, and dynamic linked list handling.

By engineering this custom C library (`libft.a`), developers gain a thorough, low-level understanding of C programming fundamentals, including:
* **Manual Memory Management:** Dynamic allocation with `malloc`, contiguous block initialization, overlapping memory safety, and strict memory leak prevention using `free`.
* **Pointer Arithmetic & Raw Data Manipulation:** Direct byte-level operations via generic pointers (`void *`) and string manipulations using character arrays (`char *`).
* **System Calls:** Direct kernel interaction for output rendering through the `write` system call using specific File Descriptors (`fd`).
* **Dynamic Data Structures:** Implementation and lifecycle management of singly-linked lists using standard C structures (`struct`).

This compiled static library serves as an extensible toolkit that will be integrated into and expanded upon in future 42 curriculum projects, such as *ft_printf*, *get_next_line*, and *minishell*.

---

## Library Details

The compiled static library `libft.a` contains functions categorized into three core sections, built strictly according to C standard behaviors and edge-case requirements:

### Part 1: Standard C Library (Libc) Functions
Re-implementations of standard C library functions adhering to their official manual pages (`man`):

* **Character Classification & Conversion:**
  * `ft_isalpha`: Checks if a character is alphabetic (A-Z, a-z).
  * `ft_isdigit`: Checks if a character is a decimal digit (0-9).
  * `ft_isalnum`: Checks if a character is alphanumeric (`ft_isalpha` or `ft_isdigit`).
  * `ft_isascii`: Checks if a character belongs to the 7-bit ASCII character set (0–127).
  * `ft_isprint`: Checks if a character is printable, including space (ASCII 32–126).
  * `ft_toupper`: Converts a lowercase character to its uppercase equivalent.
  * `ft_tolower`: Converts an uppercase character to its lowercase equivalent.

* **String Operations:**
  * `ft_strlen`: Calculates the exact length of a null-terminated string.
  * `ft_strlcpy`: Copies up to `dstsize - 1` characters from source to destination, guaranteeing NULL-termination to prevent buffer overflows.
  * `ft_strlcat`: Appends source to destination up to `dstsize - 1` total bytes, ensuring NULL-termination.
  * `ft_strchr`: Locates the first occurrence of a character in a string.
  * `ft_strrchr`: Locates the last occurrence of a character in a string.
  * `ft_strncmp`: Lexicographically compares two strings up to `n` bytes.
  * `ft_strnstr`: Searches for the first occurrence of a substring within a string limited by a given search length.
  * `ft_atoi`: Converts an ASCII string representation of an integer into its actual `int` value, handling leading whitespaces, sign signs (`+`/`-`), and integer boundaries.

* **Raw Memory Operations:**
  * `ft_memset`: Fills a block of memory with a constant byte value.
  * `ft_bzero`: Erases data in a memory area by writing zeros (`\0`) to it.
  * `ft_memcpy`: Copies `n` bytes from a source memory area to a destination area.
  * `ft_memmove`: Safely copies `n` bytes between memory areas, handling overlapping memory blocks correctly by copying backwards or using an intermediate buffer state.
  * `ft_memchr`: Searches a block of memory for the first occurrence of a specific byte value.
  * `ft_memcmp`: Compares two blocks of memory byte-by-byte.
  * `ft_calloc`: Dynamically allocates memory for an array of elements and initializes all bytes to zero (`\0`).
  * `ft_strdup`: Duplicates a string by allocating dynamic memory with `malloc` and copying its contents.

---

### Part 2: Additional Utility Functions
A set of non-standard, custom utility functions designed for string generation, array splitting, and direct file descriptor writing:

* **String Allocation & Manipulation:**
  * `ft_substr`: Extracts a substring from a string given a starting index and maximum length, safely handling out-of-bound requests.
  * `ft_strjoin`: Allocates dynamic memory and concatenates two strings into a new single string.
  * `ft_strtrim`: Trims all characters specified in a reference set from both the beginning and the end of a string.
  * `ft_split`: Splits a string into an array of substrings using a specified delimiter character (`c`), handling multiple consecutive delimiters and ensuring complete memory cleanup if allocation fails mid-process.
  * `ft_itoa`: Converts an integer value (`int`) into a NULL-terminated string, correctly handling negative numbers and edge cases like `INT_MIN` (`-2147483648`).
  * `ft_strmapi`: Applies a function `f` to each character of a string to create a new dynamically allocated transformed string.
  * `ft_striteri`: Applies a function `f` to each character of a string in-place by passing its index and address.

* **File Descriptor Output Operations:**
  * `ft_putchar_fd`: Writes a single character to a given File Descriptor (`fd`).
  * `ft_putstr_fd`: Writes a string to a given File Descriptor (`fd`).
  * `ft_putendl_fd`: Writes a string followed by a newline character (`\n`) to a given File Descriptor (`fd`).
  * `ft_putnbr_fd`: Writes an integer (`int`) to a given File Descriptor (`fd`), using recursion and `long` type conversion to handle arithmetic limits.

---

### Bonus Part: Singly-Linked List Functions
Functions designed to manage dynamic data structures using the `t_list` structure defined in `libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

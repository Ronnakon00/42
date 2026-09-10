*This project has been created as part of the 42 curriculum by rthanett.*

# Libft

## Description
Libft serves as the foundational C library project in the 42 syllabus. The primary purpose is to build a personal C library from scratch, gaining a deeper understanding of standard functions, dynamic memory management, and data structures.

The library comprises three primary sections:
- **Standard Libc Re-implementations:** Re-created core C standard functions using the `ft_` prefix, adhering closely to their official manual pages.
- **Additional Utility Functions:** Tailored functions for string processing, memory manipulation, integer conversions, and file descriptor outputs.
- **Linked List Utilities (Bonus):** Functions dedicated to managing linked lists through the `t_list` structure.

## Instructions

- `make` / `make all`: Compiles all C sources (`.c`) using `cc` with `-Wall -Wextra -Werror` flags and packages them into the `libft.a` static library via `ar`.
- `make bonus`: Compiles and links the linked list functions into `libft.a`.
- `make clean`: Deletes intermediate object files (`.o`).
- `make fclean`: Cleans up object files along with the created `libft.a` binary.
- `make re`: Rebuilds the static library from scratch.

## Resources

- **References:**
  - Standard C Manual Pages (`man 3 malloc`, `man 3 free`, `man 3 write`, etc.).
  - GNU C Library Documentation.
  - Collaborative discussions with 42 peers and campus staff.

- **AI Assistance (Gemini):**
  - **Concept Clarification:** Clarifying corner cases regarding `ft_memmove` pointer overlaps and `ft_strtrim` boundary checks.
  - **Memory Management:** Debugging potential leaks in `ft_split` during partial allocation failures.
  - **Code Quality:** Identifying norm compliance issues and edge-case behaviors without generating direct functional code.
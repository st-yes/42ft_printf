
<h1 align="center">
  <br>
  <img src="https://github.com/st-yes/42-project-badges/blob/main/badges/ft_printfe.png?raw=true" alt="Markdownify" width="200">
  <br>
  42-PRINTF
  <br>
</h1>

<h4 align="center">Because ft_putnbr() and ft_putstr() aren’t enough</h4>


<p align="center">
  <a href="#DESCRIPTION">DESCRIPTION</a> •
  <a href="#BUILT WITH">BUILT WITH</a> •
  <a href="#INSTALLATION">INSTALLATION</a> •
  <a href="#USAGE">USAGE</a> •
  <a href="#RESOURCES">RESOURCES</a> •
</p>

## DESCRIPTION
<p>
ft_printf is a custom implementation of the printf function in C. This project aims to replicate some of its functionality. It's a rich example of a variadic function, as it allows you to format and write output to STDOUT. It supports placeholders for various data types, such as strings, characters and integers.
</p>

## BUILT WITH
![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)

## INSTALLATION
1. Clone the repository to your local machine:
```bash
git clone https://github.com/st-yes/42ft_printf
```
2. Navigate to the library's directory:
```bash
cd 42ft_printf
```
3. Compile
```bash
make
```
## USAGE

1. To use ft_printf in your code, include the ft_printf.h header file:
```C
#include "ft_printf.h"
```
2. link the library during the compilation  

```bash
gcc project.c libftprintf.a
```

## RESOURCES
- [variadic functions (fr)](https://x0r.fr/blog/31?utm_source=pocket_saves)
- [variadic functions mechanism in c](https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/va-arg-va-copy-va-end-va-start?utm_source=pocket_saves&view=msvc-170)
- [difference between %i and %d](https://www.geeksforgeeks.org/difference-d-format-specifier-c-language/?utm_source=pocket_reader)

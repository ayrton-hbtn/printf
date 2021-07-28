#_printf

Hello and welcome to our first group project, we're replicating the printf() function from the C Standard Library.

##Functionality

The printf() function takes input text and displays it on screen as stdout. It also uses format specifiers to display different variables previoulsy defined. For this we need format specifiers. To finish up, we have our text displayed on screen and a count of bytes printed.

**The syntax is as follows:**

    _printf(const char *format, ...);

**Example:**

    _printf("Hola %s\n", "Mundo");

*Output:*

    Hola Mundo

In the above example, we use the format specifier *%s*, which is defined for strings. To make it work we need to detect the special character *'%'* and the following character, in this case the letter 's'.
Then, we call our function to iterate a string, let's call it *print_string(char \*c);* 
Then, we redirect the output of our *print_string()* function to our *_printf()* function, ending with the desired output.


**Steps:**

1. Pass in formatted text and variables for specifiers
2. Define iterators, flags and list to retrieve and manipulate input.
3. Verify that input exists, i.e something is passed into the function parameters.
4. Iterate the text and print it character by character, count bytes.
5. if there are any format specifiers, detect them and retrieve it's corresponding value from list.
   
**Library**

For our format specifiers to work properly, we need functions that take input and process it to display our desired output. The way we have to relate our *_printf()* program to these other functions is through a static library. We have all our files within the same directory and a library file with format *.h* that contains our function prototypes. Then the compiler takes care of calling our functions by matching the prototypes to our actual files. 

**Chart of specifiers and related functions:**

| Specifier | Variable assigned | Function prototype | Description |
| ----------- | ----------- | ----------- | ----------- |
| %% | N/A | _putchar(char c); | Prints special character '%' |
| %c | Char | _putchar(char c); | Prints one character |
| %s | String | print_str(char *c); | Prints string | 
| %d | Integer | print_int(long int num); | Prints integer |
| %i | Integer | print_int(long int num); | Prints  integer |
| %u | Integer | print_unt(long int num); | Prints integer without sign |
| %b | Unsigned Integer | print_bin(unsigned long int num); | Prints integer in binary |
| %o | Unsigned Integer | print_oct(unsigned long int num); | Prints integer in octal |
| %x | Unsigned Integer | print_hexlow(unsigned long int num); | Prints integer in lowercase hexadecimal |
| %X | Unsigned Integer | print_hex(unsigned long int num); | Prints integer in uppercase hexadecimal |
| %S | String | print_Str(char *c); | Prints string, special characters printed with their ASCII code in binary |
| %p | Void Pointer | print_ptr(void *ptr); | Prints address where pointer points to |
| %R | String | print_rot13(char *c); | Prints string in rot13 format |
| %r | String | print_rev(char *c); | Prints string reversed |

##Flowchart
![flowchart](https://lh3.googleusercontent.com/twgsuB2YsDhf61T-tuzcnyRfoMfsrjiyo7ouNOMq6UL_Ht4Py662oWv8aNkOrWbJyUWSPDLn0UDheqkvcNOMgr1FBwcbYe5cBNDODr6OeDltoj-JRm6D1iuh-bccIPLrZLmy5NrRzYELnvjCUjFyL8zU3XzJZRdfTvmrcE7CSUoE92KUx9qyq9JHHXIdaYvaSPCGxr8ofHM2Okgn81M8VMMqyNGMK0uEmv7DYTE-fBA2VitswSHTtHg0BJmeeXuwHDn53ViTJUztqSUjbiU9zhMU99AIw_Qa5urb_dzlyuhKgjSiXF1CGnz5J5zGb9A0NB1A-myWflgfVr57fFFBi_m0kQZxefCz26xMc7KVrLMvunSNuGHDcJdInc9SuT8LKIVPdifhYDq5-XAHiLZsHgM-pMHldXpY354HUTbSHXY_WQO37xZyLEAF3yUFAYvuNjGORjbp-XrOacmQUfUY5BLesKXRrsjVnrkooYXxRFb6iYvsnHzVCNP7_loldw4-tpnSCdKpEXT3Ia4AdCCy3IWi3-ms8i_1X8O3JTVABoVu0tQOW_BCixJp0zfH1QD6mDf5AgnUa13i-zaN1zyTbZ2hLdeNpHY8laE5Pt7fHXFdP6PYffQBvMCQC2F1Quuf7kE_pzIrh1r4_-FzhdoqRpBhvDPblM37jsly8vOX2IBaWRRn4iL5_uB-QOTDYjEoy9SGugf-KeUUrEbEofSQrA=w1236-h866-no?authuser=0)

*Ayrton Coelho, Marcelo Arbiza.*

# 42 Printf

The versatility of the printf function in C represents a great exercise in programming. This project was of moderate difficulty. It enabled to discover variadic functions in C.
The key to a successful ft_printf is a well-structured and good extensible code.

• The prototype of ft_printf is ft_printf(const char *, ...);

• It does not do the buffer management like the real printf;

• It manages the following conversions: cspdiuxX%;

• It can be compared with the real printf;

• The project used command ar to create the librairy; using the command libtool was forbidden.

 ## A small description of the required conversion:

• %c print a single character.

• %s print a string of characters.

• %p The void * pointer argument is printed in hexadecimal. 

• %d print a decimal (base 10) number.

• %i print an integer in base 10.

• %u print an unsigned decimal (base 10) number.

• %x print a number in hexadecimal (base 16), with lowercase. 

• %X print a number in hexadecimal (base 16), with uppercase. 

• %% print a percent sign.

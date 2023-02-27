0 - Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
Prototype: void reset_to_98(int *n);
1 - Write a function that swaps the values of two integers.
Prototype: void swap_int(int *a, int *b);
2 - Write a function that returns the length of a string.
Prototype: int _strlen(char *s);
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.
3 - Write a function that prints a string, followed by a new line, to stdout.
Prototype: void _puts(char *str);
FYI: The standard library provides a similar function: puts. Run man puts to learn more.
4 - Write a function that prints a string, in reverse, followed by a new line.
Prototype: void print_rev(char *s);
5 - Write a function that reverses a string.
Prototype: void rev_string(char *s);
6 - Write a function that prints every other character of a string, starting with the first character, followed by a new line.
Prototype: void puts2(char *str);
7 - Write a function that prints half of a string, followed by a new line.
Prototype: void puts_half(char *str);
The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
8 - Write a function that prints n elements of an array of integers, followed by a new line.
Prototype: void print_array(int *a, int n);
where n is the number of elements of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
You are allowed to use printf

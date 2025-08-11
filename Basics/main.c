#include<stdio.h>

int main() /* This is the entry point of the function. */{
    printf("Hello, World!\n");
    printf("This is a C program using the C17 standard.\n");
    /*

    printf("This is a C program using the C17 standard.\n");
    int a = 10;
    int b = 20;
    int sum = a + b;
   */

   // Variables
    // Integers
    int a; //Declaration of variable 'a', has garbage value.
    printf("%d\n",a); // This line is incorrect, it should be printf("%d", a);
    a = 10; // Assigning value to 'a'.
    int b = 20; // Declaration and initialization of variable 'b'.
    int sum = a + b; // Calculating the sum of 'a' and 'b'.
    printf("The sum of %d and %d is %d\n", a, b, sum); // Printing the sum of 'a' and 'b'.

    // Floating point numbers
    float f; // Declaration and initialization of a float variable 'f'.
    printf("The value of f is: %f\n", f); // Printing the value of 'f'.
    // Floats by default shoe up to six decimal places.
    f = 3.14; // Assigning value to 'f'.
    printf("The value of f is: %f\n", f); // Printing the value of 'f' after assignment.
    // But we can change the number of decimal places shown.
    printf("The value of f with two decimal places: %.2f\n", f); // Printing 'f' with two decimal places.   
    //Even more decimal places can be shown.
    printf("The value of f with four decimal places: %.15lf\n", f); // Printing 'f' with four decimal places.

    // Characters
    char c = 'A'; // Declaration and initialization of a character variable 'c'.
    printf("The character is: %c\n", c); // Printing the character 'c'.
    // Strings ----> [Array of characters]
    char str[] = "Hello, C!"; // Declaration and initialization of a string variable 'str'.
    printf("The string is: %s\n", str); // Printing the string 'str'.

    // Printing the size of different data types
    printf("Size of int: %zu bytes\n", sizeof(int)); // Printing the size of an integer.
    printf("Size of float: %zu bytes\n", sizeof(float)); // Printing the size       of a float.
    printf("Size of char: %zu bytes\n", sizeof(char)); // Printing the size of a character.
    printf("Size of double: %zu bytes\n", sizeof(double)); // Printing the size of a double. 
    // What is zu? It is used to print the size of a variable in bytes.       




    // Format specifiers    printf("Integer: %d\n", a); // Printing integer value of 'a'.
    printf("Integer: %d\n", a); // Printing integer value of 'a'.
    // %d --> Integer
    // %f --> Float
    // %c --> Character
    // %s --> String    







   return 0; /* Return 0 indicates successful execution. */   
}
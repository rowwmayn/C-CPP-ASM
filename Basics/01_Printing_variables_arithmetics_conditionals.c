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
    // What is zu? It is used to print the size of a variable in bytes. Can we use just %d?
    // Yes, but %zu is the correct format specifier for size_t type, which is the return type of sizeof operator.      




    // Format specifiers   
    /* 
    Start with a percent sign (%), followed by a character that specifies the type of data to be printed.
    For example, %d is used for integers, %f for floating-point numbers, %c for characters, and %s for strings.
    Format specifiers can also include optional flags, width, precision, and length modifiers to control the output format.
    For example, %.2f specifies that a floating-point number should be printed with two decimal places.
    Format specifiers are used in functions like printf() to format the output of variables.    
    They allow you to control how data is displayed, such as specifying the number of decimal places for floating-point numbers or the width of the output.
    */
    
    //printf("Integer: %d\n", a); // Printing integer value of 'a'.
    printf("Integer: %d\n", a); // Printing integer value of 'a'.
    // %d --> Integer
    // %f --> Float
    // %c --> Character
    // %s --> String    


    // Arithmetic operations
    int x = 5, y = 3; // Declaration and initialization of two integer variables 'x' and 'y'.
    printf("Addition: %d + %d = %d\n", x, y, x + y); // Printing the result of addition.
    printf("Subtraction: %d - %d = %d\n", x, y, x - y); // Printing the result of subtraction.
    printf("Multiplication: %d * %d = %d\n", x, y, x * y); // Printing the result of multiplication.
    printf("Division: %d / %d = %d\n", x, y, x / y); // Printing the result of division.
    printf("Modulus: %d %% %d = %d\n", x, y, x % y); // Printing the result of modulus operation.   
    // Note: The %% is used to print a single % character in the output.
    // Increment and Decrement operators
    x++; // Incrementing 'x' by 1.      
    printf("Incremented x: %d\n", x); // Printing the incremented value of 'x'.
    y--; // Decrementing 'y' by 1.  
    printf("Decremented y: %d\n", y); // Printing the decremented value of 'y'.
    // Conditional statements
    if (x > y) { // Checking if 'x' is greater than 'y 
    printf("x is greater than y\n"); // Printing if 'x' is greater than 'y'.
    } else if (x < y) { // Checking if 'x' is less than 'y'.
        printf("x is less than y\n"); // Printing if 'x' is less than 'y'.
    } else { // If neither condition is true, then 'x' is equal to 'y'.
        printf("x is equal to y\n"); // Printing if 'x' is equal to 'y'.
    }
    
   return 0; /* Return 0 indicates successful execution. */   
}
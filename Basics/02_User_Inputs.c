#include<stdio.h>

int main() {

    int age, id;
    float gpa;
    char grade;
    char name[100];

    printf("Enter your name: ");
    scanf("%s", name); // Read a string input for name
    printf("Enter your age: ");
    scanf("%d", &age); // Read an integer input for age
    printf("Enter your ID: ");
    scanf("%d", &id); // Read an integer input for ID
    printf("Enter your GPA: "); 
    scanf("%f", &gpa); // Read a float input for GPA
    if (gpa >= 3.5) {
        grade = 'A'; // Assign grade A if GPA is 3.5 or higher
    } else if (gpa >= 2.5) {
        grade = 'B'; // Assign grade B if GPA is between 2.5 and 3.5
    } else if (gpa >= 1.5) {
        grade = 'C'; // Assign grade C if GPA is between 1.5 and 2.5
    } else {
        grade = 'D'; // Assign grade D if GPA is below 1.5
    }
    printf("Name: %s\n", name); // Print the name
    printf("Age: %d\n", age); // Print the age
    printf("ID: %d\n", id); // Print the ID
    printf("GPA: %.2f\n", gpa); // Print the GPA with two decimal places
    printf("Grade: %c\n", grade); // Print the grade    

    return 0; 
}
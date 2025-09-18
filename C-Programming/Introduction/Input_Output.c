//
// Created by Rookr on 18/09/25.
//
#include<stdio.h>

int main() {
    printf("First Print");

    int age =  22;
    printf("%d\n", age);
    printf("The value of the variable age is %d\n", age);
    // fputs: Represnts text to be printed to Console
    fputs("This is my string", stdout);

    // Input
    int age2;
    printf("Enter your age:");
    scanf("%d",&age);

    // Prints the age
    printf("Age is: %d\n", age);

    char ch;
    printf("Enter a character: \n");

    // Reads an Character
    scanf("%c", &ch);

    // Prints the Character
    printf("Entered character is: %c\n", ch);


    char str[100];  // Declare an array to hold the input string

    printf("Enter a string: ");
    scanf("%s", str);  // Reads input until the first space or newline

    printf("You entered: %s\n", str);

    // String variable
    char name[20];

    printf("Enter your name: \n");
    fgets(name, sizeof(name), stdin);

    printf("Hello, %s", name);
    return 0;
}
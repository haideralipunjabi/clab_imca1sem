/*
Title: Calculator
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 27-06-2018
*/
#include <stdio.h>
#include <stdlib.h>

// Variable Deceleration
int num1, num2;
char op;

int main()
{
    // Start the calculator
    calculator();
    return 0;
}

void calculator(){
    // Show the menu
    menu();
    // Take User Input
    input();
    // Perform Operation
    operation();
    // Redo Prompt
    redo();
}

/* input()
 * Take two numbers as input from user
 */
void input(){
    system("cls");
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
}

/* menu()
 * Used to display the menu, and take user input
 */
void menu(){
    system("cls");
    printf("Choose Operation\n");
    printf("1. a for Addition\n");
    printf("2. s for Subtraction\n");
    printf("3. m for Multiplication\n");
    printf("4. d for Division\n");
    printf("Enter Choice: ");
    scanf(" %c", &op);

    // Input Validation
    if(op != 'a' && op != 's' && op != 'm' && op != 'd')
        menu();
}

/* operation()
 * Used to choose the operation to perform based on user input
 */

void operation(){
    switch(op){
        case 'a':
            add();
            break;
        case 's':
            sub();
            break;
        case 'm':
            multiply();
            break;
        case 'd':
            divide();
            break;
    }
}

/* add()
 * Used to add num1 and num2 and print the sum
 */
void add(){
    printf("Sum = %d", num1 + num2);
}

/* sub()
 * Used to subtract num1 and num2 and print the difference
 */
void sub(){
    printf("Difference = %d", num1 - num2);
}

/* multiply()
 * Used to multiply num1 and num2 and print the product
 */
void multiply(){
    printf("Product = %d", num1 * num2);
}

/* divide()
 * Used to divide num1 and num2 and print the quotient
 */
void divide(){
    printf("Quotient = %g", (float)num1/num2);
}

/* redo()
 * Prompt user to make another calculation
 */
void redo(){
    char ch;
    printf("\nMake another calculation? (y/n): ");
    scanf(" %c", &ch);
    if(ch == 'y' || ch == 'Y')
        calculator();
    else if(ch != 'n' && ch != 'N')
        redo();
}


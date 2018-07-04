/*
Title: Calculator
Author: Haider Ali Punjabi
Mail: me@haideralipunjabi.com
Date: 27-06-2018
*/
#include <stdio.h>
#include <stdlib.h>

// Variable Deceleration

int main()
{
    // Start the calculator
    calculator();
    return 0;
}

void calculator(){
    // Take User Input
     int num1, num2;
    system("cls");
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    menu();
    operation(num1,num2);
   // Redo Prompt
    redo();
}

/* menu()
 * Used to display the menu
 */
void menu(){
    system("cls");
    printf("Choose Operation\n");
    printf("1. a for Addition\n");
    printf("2. s for Subtraction\n");
    printf("3. m for Multiplication\n");
    printf("4. d for Division\n");
}

/* operation()
 * Used to choose the operation to perform based on user input
 */

void operation(num1,num2){
    char op;
    printf("Enter Choice: ");
    scanf(" %c", &op);
    lowercase(&op);
    // Input Validation
    if(op != 'a' && op != 's' && op != 'm' && op != 'd')
        {
            menu();
            operation(num1,num2);
        }
    else{
            switch(op){
                case 'a':
                    printf("Sum = %d", add(num1,num2));
                    break;
                case 's':
                    printf("Difference = %d",sub(num1,num2));
                    break;
                case 'm':
                    printf("Product = %d",multiply(num1,num2));
                    break;
                case 'd':
                    printf("Quotient = %d",divide(num1,num2));
                    break;
            }

        }
}

/* add()
 * Used to add num1 and num2
 */
int add(int num1,int num2){
    return num1 + num2;
}

/* sub()
 * Used to subtract num1 and num2
 */
int sub(int num1,int num2){
    return num1 - num2;
}

/* multiply()
 * Used to multiply num1 and num2
 */
int multiply(int num1,int num2){
    return num1 * num2;
}

/* divide()
 * Used to divide num1 and num2
 */
int divide(int num1,int num2){
    return num1 / num2;
}

/* redo()
 * Prompt user to make another calculation
 */
void redo(){
    char ch;
    printf("\nMake another calculation? (y/n): ");
    scanf(" %c", &ch);
    lowercase(&ch);
    if(ch == 'y')
        calculator();
    else if(ch != 'n')
        redo();
}

void lowercase(char *c){
    if(*c >= 65 && *c <= 90){
       *c += 32;
    }
}
void uppercase(char *c){
    if(*c >= 97 && *c <= 122){
       *c -= 32;
    }
}

#include <stdio.h>
#include <math.h>
#include <stdbool.h> 

// TODO freshen up the look
// TODO move most of the functionality up to functions
// TODO do not show output of the input when selecting from menu
// TODO git repo


int main(){

    int choice;
    float num1, num2, result;

    printf("Welcome to the calculator app!\n");

    while(1){

    printf("Enter the operation you want to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("0. Exit\n");

    scanf("%d", &choice);

    if (choice == 0){
        printf("Thank's for using the calculator app");
        break;
    }

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch(choice) {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            result = num1 / num2;
            break;
        default:
            printf("Invalid choice!\n");
            continue;
    }


    printf("-------------");
    printf("\nResult: %.2f\n", result);
    printf("-------------\n");

    }

    return 0;
}
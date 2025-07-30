#include<stdio.h>
#include<math.h>

int main() {
    float num1, num2;
    int choice;
    while(1) {
    printf("Welcome to simple calculator.\n");
    printf("Please choose the operation you want to perform :- \n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n6. Power\n7. Exit\n");
    printf("Now enter your choice : ");
    scanf("%d", &choice);
    if(choice == 7) {
        printf("You have exitted the system successfully.\n");
        break;
    }
    if(choice<1 || choice>7) {
        printf("Invalid menu choice.\n");
        continue;
    }
    printf("Please enter your first number : ");
    scanf("%f", &num1);
    printf("Please enter your second number : ");
    scanf("%f", &num2);
    switch(choice) {
        case 1:
        printf("Result of operation is : %f\n", num1 + num2);
        break;
        case 2:
        printf("Result of operation is : %f\n", num1 - num2);
        break;
        case 3:
        printf("Result of operation is : %f\n", num1 * num2);
        break;
        case 4:
        if(num2 == 0) {
            printf("Invalid argument for division.\n");
        } else {
        printf("Result of operation is : %.2f\n", num1 / num2);
        }
        break;
        case 5:
        if(num2 == 0) {
            printf("Invalid argumnt for modulus.\n");
        } else {
        printf("Result of operation is : %d.\n", (int)num1 % (int)num2);
        }
        break;
        case 6:
        printf("Result of operation is : %.2f.\n", pow(num1, num2));
        break;
    }
    printf("-------------------------------------------\n");
}
    return 0;
}
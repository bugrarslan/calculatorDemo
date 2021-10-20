#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operation;
    int number1, number2;

    printf("please select what will you do: s: summation, e: extraction, m: multiplication, d: division : ");

    operation = getchar();

    if(operation == 's') {

        printf("enter number one: ");
        scanf("%d", &number1);

        printf("enter number one: ");
        scanf("%d", &number2);

        int result = summation(number1, number2);
        printf("the result is: %i", result);
    }

    else if(operation == 'e') {

        printf("enter number one: ");
        scanf("%d", &number1);

        printf("enter number one: ");
        scanf("%d", &number2);

        int result = extraction(number1,number2);
        printf("the result is: %i", result);
    }

    else if(operation == 'm') {

        printf("enter number one: ");
        scanf("%d", &number1);

        printf("enter number one: ");
        scanf("%d", &number2);

        int result = multiplication(number1,number2);
        printf("the result is: %i", result);
    }

    else if(operation == 'd') {

        printf("enter number one: ");
        scanf("%d", &number1);

        printf("enter number one: ");
        scanf("%d", &number2);

        int result = division(number1,number2);
        printf("the result is: %i", result);
    }

    else {
        printf("You've entered a wrong number. Please restart the calculator.");
    }


    return 0;
}

private; int summation(int n1, int n2) {

    return n1 + n2;
}

private; int extraction(int n1, int n2) {

    return n1 - n2;
}

private; int multiplication(int n1, int n2) {

    return n1 * n2;
}
private; int division(int n1, int n2) {

    return n1 / n2;
}

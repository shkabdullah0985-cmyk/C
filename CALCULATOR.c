#include <stdio.h>
#include <math.h>

int main() {

    float number1, number2;
   
    char operation;

    printf("ENTER A NUMBER 1:- ");
    scanf("%f", &number1);

    printf("ENTER A NUMBER 2:- ");
    scanf("%f", &number2);

   
    printf("ENTER AN OPERATION (+,-,*,/,%%,@,#,$) :- ");
    scanf(" %c", &operation);

    
    if (operation == '+') {
        printf("ADDITION IS :- %f\n", number1 + number2);
    } 
    else if (operation == '-') {
        printf("SUBTRACTION IS :- %f\n", number1 - number2);
    } 
    else if (operation == '*') {
        printf("MULTIPLICATION IS :- %f\n", number1 * number2);
    } 
    else if (operation == '/') {
        if (number2 == 0) {
            printf("CANNOT DIVIDE BY 0.\n");
        } else {
            printf("DIVISION IS :- %f\n", number1 / number2);
        }
    } 
    else if (operation == '%') {
        if (number2 == 0) {
            printf("CANNOT DIVIDE BY 0.\n");
        } else {
            printf("REMAINDER IS :- %f\n", fmod(number1, number2));
        }
    } 
    else if (operation == '@') {
        if (number2 == 0) {
            printf("CANNOT DIVIDE BY ZERO.\n");
        } else {
            printf("PERCENTAGE IS :- %f%%\n", (number1 / number2) * 100);
        }
    } 
    else if (operation == '#') {
        printf("POWER IS :- %f\n", pow(number1, number2));
    } 
    else if (operation == '$') {
        if (number1 < 0) {
            printf("CANNOT TAKE SQUARE ROOT OF A NEGATIVE NUMBER.\n");
        } else {
            printf("SQUARE ROOT IS :- %f\n", sqrt(number1));
        }
    } 
    else {
        printf("ENTER A VALID OPERATION.\n");
    }

return 0;
}

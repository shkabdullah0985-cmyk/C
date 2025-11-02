#include <stdio.h>
int main() {
    double a,b;
    char operation;
    printf("enter a number");
    scanf("%lf",&a);
    printf("enter a operation");
    scanf("%lf",&operation);
    printf("enter a number");
    scanf("%lf",&b);
     
    double add,sub,mul,div;
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    if(operation=='+') {
printf("addition is ",add);
    } 
    else if(operation=='-'){
printf("subtraction is ",sub);
    }
    else if(operation=='*') {
        printf("multiplication is", mul);
    }
    else if(operation=='/'){
        if(b==0){
            printf("enter a number except 0");
        }
        else {
            printf("division is ",div);
        }
    }else {
        printf("enter a valid operation");}
return 0;
    }

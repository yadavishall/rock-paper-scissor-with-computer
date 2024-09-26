#include <stdio.h>

int main(){
    int a,b,c;
    char op;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("choose the operation (* for multiplication,/ for division , + for addition and - for subtraction)\n");
    scanf(" %c",&op);
    printf("enter the second number:");
    scanf("%d",&b);
    switch(op){
        case '*':
        c=a*b;
        printf("the product of these numbers is: %d",c);
        break;

        case '/':
        c=a/b;
        printf("the quotient is %d",c);
        break;

        case '+':
        c=a+b;
        printf("the addition of these numbers is %d",c);
        break;

        case '-':
        c=a-b;
        printf("on subtracting %d from %d you will get %d",a,b,c);
        break;

        default:
        printf("wrong choice!!");
    }
    return 0;
}

#include <stdio.h>

int main() {
    int num1,num2;
    char operatorSign;
    int result;

printf("Enter Number\n");
scanf("%d", &num1);

printf("Enter Operator Sign\n");
scanf(" %c", &operatorSign);

printf("Enter Number\n");
scanf("%d", &num2);

switch(operatorSign){
 case '+': 
 result = num1 + num2;
 printf("%d + %d = %d", num1,num2,result);
 break;

 case '-':
 result = num1 - num2;
 printf("%d - %d = %d", num1,num2,result);
 break;

 case '*': 
 result = num1 * num2;
 printf("%d x %d = %d", num1,num2,result);
 break;

 case '/': 
 result = num1 / num2;
 printf("%d / %d = %d", num1,num2,result);
 break;

}
    return 0;
}

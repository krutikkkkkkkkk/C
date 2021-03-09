#include <stdio.h>

int main() {
    int number,i;

 printf("Enter Any Number\n");
 scanf("%d", &number);
 printf("Entered number %d\n", number);
for(i = 1; i<=10; i++) {

    int table= number * i;
    printf("%d x %d = %d\n",number,i,table);
}  
    return 0;
}



//// For Kids LOL



/* #include <stdio.h>

int main() {
    int number;
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
 printf("Enter Any Number to Get the Table of\n");
 scanf("%d", &number);

 num1 = number * 1;
 num2 = number * 2;
 num3 = number * 3;
 num4 = number * 4;
 num5 = number * 5;
 num6 = number * 6;
 num7 = number * 7;
 num8 = number * 8;
 num9 = number * 9;
 num10 = number * 10;

 
 printf("Entered number %d\n", number);


 printf("%d x 1 = %d\n",number, num1);
 printf("%d x 2 = %d\n",number, num2);
 printf("%d x 3 = %d\n",number, num3);
 printf("%d x 4 = %d\n",number, num4);
 printf("%d x 5 = %d\n",number, num5);
 printf("%d x 6 = %d\n",number, num6);
 printf("%d x 7 = %d\n",number, num7);
 printf("%d x 8 = %d\n",number, num8);
 printf("%d x 9 = %d\n",number, num9);
 printf("%d x 10 = %d\n",number, num10);


    return 0;
}
*/

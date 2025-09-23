#include <stdio.h>
int main(){
int a, b, sum;
printf("Enter first value \n");
scanf("%d", &a);
printf("Enter second value \n");
scanf("%d", &b);
sum = a;
sum +=b;
printf("sum : %d\n", sum);
int greater = (a > b) ? a : b;
printf("greater number is : %d \n", greater);
return 0;
}

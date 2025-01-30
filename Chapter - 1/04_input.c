#include<stdio.h>

int main(){
 // to take a input from the user we can use the scanf function

 int num;
 scanf("%d",&num);
 // ** important : always pass the address of that variables in scanf()

 printf("The value of num is %d\n",num);

  return 0;
}
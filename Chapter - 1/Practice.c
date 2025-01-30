#include<stdio.h>

int main(){
// Q1. Write a program to calculate the area of a rectangle hardcoded or input given by user

// int len = 4,bth = 5;

// int area = len * bth;
// printf("The area of rectangle is : %d ",area);
// if values are not hardcoded
// int len,bth;
// printf("Enter the length and breadth of rectangle : \n");
// scanf("%d%d",&len,&bth);

// int area = len*bth;
// printf("The area of rectangle is : %d",area);


// **Q2 : calculate the area of circle and modify the same program to calculate volume of a cylinder given its radius and height

// int rad ;
// printf("Enter the radius of circle : \n");
// scanf("%d",&rad);

// float area;
// area = 3.14 * rad *rad;

// printf("The area of the circle is %.2f",area);


// int rad ,height;
// printf("Enter the radius and height of cylinder : \n");
// scanf("%d%d",&rad,&height);

// float area;
// area = 3.14 * rad *rad*height;

// printf("The area of the circle is %.2f",area);


// ** Q3 : Write a program to convert celcius to farenhite

// float farh ;
// scanf("%f",&farh);

// float cel ;
// cel = (farh - 32 )* 5/9;
// printf("%f",cel);

// ** Q4 : Calculate the simple interest for a set of values representing principle ,no of years and rate of interest

int year,pAmt;
float roi,si;

printf("Enter the values of no of years, principle amount , rate of interest : \n");
scanf("%d%d%f",&year,&pAmt,&roi);

si = roi * pAmt * year /100;

printf("The simple interest is : %f", si);
return 0;
}
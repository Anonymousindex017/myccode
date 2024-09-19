#include<stdio.h>
#include<string.h>
int main()
{
char str[50];

puts("Enter any string"); // using for output only for string
gets(str); // using for input only for string

puts(strupr(str));// using for output only for string
return 0;
}
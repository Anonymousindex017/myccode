#include<stdio.h>
#include<string.h>

int main()
{
char str[50], str2[40]; // using 2D array

puts("Enter the string1");//output
gets(str);//input

puts("enter the string2");
gets(str2); //input
if(strcmp(str,str2)==0) //using for campare the string
puts("both are equal");// output
else
 puts("both are not equal"); //output
 return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
char str[50],str2[40];

puts("Enter any string"); // using for output only for string
gets(str); // using for input only for string

strcpy(str2,str); // string copy into str2
 
puts( str2);// using for output only for string
return 0;
}
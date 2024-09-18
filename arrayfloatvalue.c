#include<stdio.h>
int main()
{
    int a[5]={78,90,34.11,56,89.9};
    //we ae useing the float value in the integer array so the output will be the integer value of the float value
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    
    }
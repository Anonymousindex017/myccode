#include<stdio.h>
int main()
{
    int a[5]={78,90,34,56,89};//without 6th element
    int i;
    //we can also use for loop to print the array elements
    //print the 6 elements times
    for(i=0;i<6;i++)
    {
        printf("%d\n",a[i]);
        //print the last element is 0 becuase we are not initialize the 6th element in arraty index
    }
    return 0;
    }
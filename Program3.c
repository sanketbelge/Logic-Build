//Problem Statement 3 : Program to print 5 to 1 number on screen

#include <stdio.h>

void Display()
{
    int i=0;

    for(i=5;i>=1;i--)
    {
        printf("%d\n",i);
   
    }

}

int main()
{
    Display();
    return 0;
}
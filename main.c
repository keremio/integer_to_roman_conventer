/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d" , &num);
    int s = num;
    int digits[4] = {0,0,0,0};
    for (int i = 0; i < 4; i++)
    {
            digits[3-i] = s%10 * pow(10,i);
            s /= 10;
    }
    if (digits[0] != 0)
    {
        if (999 < digits[0] && digits[0] < 4000)
        {
            for (int i = 0; i < digits[0]/1000; i++)
            {
                printf("M");
            }
        }
        else if (digits[0] == 4000)
        {
            printf("MV_");
        }
        else if (4000 < digits[0] && digits[0] < 9000)
        {
            printf("V_");
            for (int i = 0; i < digits[0]/1000 - 5; i++)
            {
                printf("M");
            }
        }
        else if (digits[0] == 9000)
        {
            printf("MX_");
        }
    }
    if (digits[1] != 0)
    {
        if (99 < digits[1] && digits[1] < 400)
        {
            for (int i = 0; i < digits[1]/100; i++)
            {
                printf("C");
            }
        }
        else if (digits[1] == 400)
        {
            printf("CD");
        }
        else if (digits[1] == 500)
        {
            printf("D");
        }
        else if (500 < digits[1] && digits[1] < 900)
        {
            printf("D");
            for (int i = 0; i < digits[1]/100 - 5; i++)
            {
                printf("C");
            }
        }
        else if (digits[1] == 900)
        {
            printf("CM");
        }
    }
    if (digits[2] != 0)
    {
        if (9 < digits[2] && digits[2] < 40)
        {
            for (int i = 0; i < digits[2]/10; i++)
            {
                printf("X");
            }
        }
        else if (digits[2] == 40)
        {
            printf("XL");
        }
        else if (digits[2] == 50)
        {
            printf("L");
        }
        else if (50 < digits[2] && digits[2] < 90)
        {
            printf("L");
            for (int i = 0; i < digits[2]/100 - 5; i++)
            {
                printf("X");
            }
        }
        else if (digits[2] == 90)
        {
            printf("XC");
        }
    }
    if (digits[3] != 0)
    {
        if (0 < digits[3] && digits[3] < 4)
        {
            for (int i = 0; i < digits[3]; i++)
            {
                printf("I");
            }
        }
        else if (digits[3] == 4)
        {
            printf("IV");
        }
        else if (digits[3] == 5)
        {
            printf("V");
        }
        else if (5 < digits[3] && digits[3] < 9)
        {
            printf("V");
            for (int i = 0; i < digits[3]/100 - 5; i++)
            {
                printf("I");
            }
        }
        else if (digits[3] == 9)
        {
            printf("IX");
        }
    }    
}



#include<cs50.h>
#include<stdio.h>
int main()
{
    int num;
    do{
        num=get_int("Enter a number\n");
    }
    while(num<=0 || num>8);
    {
        for(int i=1;i<=num;i++)
        {
            for(int s=num-i;s>0;s--)
            {
                printf(" ");
            }
            for(int j=1;j<=i;j++)
            {
                printf("#");
            }
            printf("\n");
        }

    }
}

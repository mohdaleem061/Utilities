#include <stdio.h>

int main()
{
    int strtno, endno, sum =0; //strtno = starting number , endno = ending number
    printf("Enter starting number:\t");
    scanf("%d", &strtno);
    printf("Enter ending number:\t");
    scanf("%d", &endno);
    for (int i = strtno;i <= endno;i++)
    {
        if (i % 2 != 0)
        sum = sum + i;
    }
    printf("The sum of odd numbers between %d and %d is %d", strtno, endno, sum);
}
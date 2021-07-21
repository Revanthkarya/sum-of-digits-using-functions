#include<stdio.h>
int sumofdigits(int);
int main()
{
    int num,result;
    printf("Enter the input numbers:");
    scanf("%d",&num);
    result = sumofdigits(num);
    printf("sum of digit:%d",result);
    return 0;
}
int sumofdigits(int num)
{
    if(num == 0)
        return 0;
    else
        return((num % 10) + sumofdigits(num / 10));
}

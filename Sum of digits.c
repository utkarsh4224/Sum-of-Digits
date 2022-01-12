#include <stdio.h>
int main()
{
    int Num, Remainder, Sum=0;
    printf("\nEnter the number : ");//52
    scanf("%d", &Num);
    while(Num>0)//52>0
    {
        Remainder = Num%10;//52%10=2
        Sum = Sum+Remainder;//sum = 2
        Num = Num / 10;// num=5
    }
    printf("\nSum of the digits = %d", Sum);//5
    return 0;
}


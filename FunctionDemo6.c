#include<stdio.h>

int Addition(int No1, int No2)
{
    int Result;
    Result = No1 + No2;    //Business Logic
    return Result;
}
int main()
{
    int Value1 = 0, Value2 = 0, Ans = 0;

    printf("Enter First Number :\n");
    scanf("%d",&Value1);

    printf("Enter Second Number :\n");
    scanf("%d",&Value2);

    Ans = Addition(Value1, Value2);
    
    printf("Addition is : %d\n",Ans);

    return 0;
}
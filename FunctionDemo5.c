#include<stdio.h>

void Addition(int No1, int No2)
{
    int Result;
    Result = No1 + No2; //Business Logic
    printf("Addition is : %d\n",Result);
}
int main()
{
    int Value1 = 0, Value2 = 0;

    printf("Enter First Number :\n");
    scanf("%d",&Value1);

    printf("Enter Second Number :\n");
    scanf("%d",&Value2);

    Addition(Value1, Value2);


    return 0;
}
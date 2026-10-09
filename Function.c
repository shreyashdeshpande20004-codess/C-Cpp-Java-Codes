#include<stdio.h>

int Addition(int value1, int value2)
{
    int Result;
    Result = value1 + value2;
    return Result;
}

int main()
{
    int no1=0, no2=0, Ans=0;
    printf("Enter First Number\n");
    scanf("%d",&no1);
    printf("Enter Second Number\n");
    scanf("%d",&no2);
    Ans = Addition(no1,no2);
    printf("Addition is : %d\n",Ans);
    return 0;

}





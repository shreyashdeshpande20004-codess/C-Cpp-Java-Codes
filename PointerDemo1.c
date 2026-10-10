#include<stdio.h>

int main()
{   
    char ch = 'A';
    int no = 11;
    float marks = 90.78f;
    double d = 90.56789;

    printf("%d\n",sizeof(ch));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));    

    return 0;
}
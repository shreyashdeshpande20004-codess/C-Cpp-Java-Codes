#include<stdio.h>

int main()
{
   int i = 11;
   short int j = 11;
   long int k = 11;

   printf("%d\n",sizeof(i));
   printf("%d\n",sizeof(j));
   printf("%d\n",sizeof(k));


    return 0;
}

// gcc Address.c -o Myexe


// gcc Address.c -o Myexe -w warning can be hide suppressed
// 
// ./myexe

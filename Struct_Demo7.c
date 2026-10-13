#include<stdio.h>

// 1 2 4 8 this value can be included in pragma pack
#pragma pack(1)
struct Demo
{
    int no;
    int Arr[3];


    
};

int main()
{
   struct Demo dobj;

   printf("%d\n",sizeof(dobj));

   dobj.no = 10;

   dobj.Arr[0] = 11;
   dobj.Arr[1] = 21;
   dobj.Arr[2] = 51;

   printf("%d\n",dobj.Arr[1]);

    


    return 0;
}
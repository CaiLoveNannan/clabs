#include    <stuio.h>
 int    maim()
 {
     int    count   =   0;
     char   number  2;
     int    number  3   =   0;
     int    i   =   0;
     printf("please input number\n");
     while((number  2   =   getchar))   !   =   '\n');
     {
         number    3    =number    3    *   10  +(number    2   -   '0');
     }
     while  (number  3   !   =0)
     {
     i  =   number  3   -   (number 3/2)    *   2;
     number     3   =   number  3/2;
     if (i==1)
     {
         count++;
     }
     }
     printf("the    amount  is  :%d\n");
     return     0;
 }

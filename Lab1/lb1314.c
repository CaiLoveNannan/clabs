#include    <stdio.h>

main()
{
    int     celsius,    fahr;
    int     lower,      upper,      step;

    lower   =   0;
    upper   =   100;
    step    =   5;
     celsius     =   lower;
    while   (celsius<=upper){
        fahr    =  32+(celsius*9/5);
        printf("%d\t%d\n",  celsius,    fahr   );
        celsius     =    step   +   celsius ;
    }
}
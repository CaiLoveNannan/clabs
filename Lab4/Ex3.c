#include <stdio.h>
#include <math.h>               /* for atof()                       */

#define     MAXOP       100     /* MAX SIZE OF OPERAND OR OPERATOR  */
#define     NUMBER      '0'     /* signal that a number was found   */

int getop(char []);
void push(double);
double pop(void);

/* reverse Polish calculator                                        */
main()
{
    int   type;
    double   op2;
    char    s[MAXOP];

    while ((type = getop(s)) != EOF) {
        switch (type){
            case NUMBER:
                 push(atof(s));
                 break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() + pop());
                break;
            case '-':
                push(pop() - op2);
                break;
            case '/':
            op2 = pop();
                if (op2 != 0.0)
                     push(pop() / op2);
                else 
                    printf("error: zero divisor\n");
                    break;
            case '%':
                op2 = pop();
                if (op2 != 0.0)
                     push(fmod(pop(),op2));
                else
                     printf("error: zero divisor\n");
                     break;
            case '\n':
                printf("\t%.8g\n", pop());
                break;
            default:
            printf("error: unknown command %s\n", s);
        }
    }
    return 0;
}
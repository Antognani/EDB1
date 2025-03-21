#include <stdio.h>

/* questão 2*/

void troca(int *a, int *b){
   int temp = *a;
   *a = *b;
    *b = temp;
}
int main()
{
int x = 12;
int y = 5555;

/* antes da troca*/
printf("%d\n", x);
printf("%d\n", y);
    troca(&x, &y);

/* depois da troca*/
printf("%d\n", x);
printf("%d\n", y);
    return 0;
}
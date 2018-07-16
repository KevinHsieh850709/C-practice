#include <stdio.h>
#include <stdlib.h>

void main(){
    int x, s;
    scanf("%d", &x);
    s = (x % 15 != 0) && ((x % 3 == 0) || (x % 5 == 0));
    printf("%d\n", s);
    system("pause");
}

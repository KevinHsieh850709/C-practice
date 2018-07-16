#include <stdio.h>
#include <stdlib.h>

void main(){
    int x;
    scanf("%d", &x);
    x = (x + 1) % 2;
    printf("%d\n", x);
    system("pause");
}

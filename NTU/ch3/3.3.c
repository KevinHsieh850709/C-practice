#include <stdio.h>
#include <stdlib.h>

void main(){
    int x, result = 0;
    scanf("%d", &x);
    result += (x % 10);
    x /= 10;
    result += (x % 10);
    x /= 10;
    result += (x % 10);
    x /= 10;
    result += (x % 10);
    printf("%d\n", result);
    system("pause");
}

#include <stdio.h>

typedef int (*calc)(int, int);

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }

int calculate(int a, int b, calc method) 
{
    return method(a, b);
}

int _calculate(int a, int b, int (*cal)(int, int)) 
{
    return cal(a, b);
}

int main() {
    int a = 10; 
    int b = 5;

    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", calculate(a, b, add));
    printf("a - b = %d\n", calculate(a, b, sub));
    printf("a * b = %d\n", calculate(a, b, mul));
    printf("a / b = %d\n", calculate(a, b, div));

    int (*_add)(int, int) = &add;
    printf("%d\n", _add(1, 2));
}


#include <stdio.h>

void parseFunc(float f1, int i1, char c1) {
    printf("%f %d %c\n", f1, i1, c1);
}

int main() {
    parseFunc(0.87, 87, 'a');

    void (*myFunc)(float, int, char) = parseFunc;
    myFunc(0.87, 877, 'b');
    return 0;
}
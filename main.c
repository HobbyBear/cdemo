#include <stdio.h>
#include <setjmp.h>

int add(int a, int b) {
    return a + b;
}

int a = 5;

int main() {
    add(3, 4);
    return 0;
}


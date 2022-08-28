#include <stdio.h>


int __attribute__ ((noinline)) add(int a, int b) {
    return a + b;
}


int main() {
    int c = add(3, 4);
    printf("%d",c);
    return 0;
}


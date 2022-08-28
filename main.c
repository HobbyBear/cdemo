#include <stdio.h>

#pragma GCC push_options
#pragma GCC optimize ("O0")

int __attribute__ ((noinline)) add(int a, int b) {
    return a + b;
}


int main() {
    int c = add(3, 4);
    printf("%d",c);
    return 0;
}

#pragma GCC pop_options


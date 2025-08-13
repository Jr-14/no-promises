#include <pthread.h>
#include <stdio.h>

typedef struct cont {
    void (*fn)(void *arg, void *val);
    void *arg; struct cont *next;
} cont_t;


int main() {
    printf("hello, world!\n");

    return 0;
}

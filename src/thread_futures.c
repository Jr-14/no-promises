#include <pthread.h>
#include <stdio.h>

typedef struct cont {
    void (*fn)(void *arg, void *val);
    void *arg; struct cont *next;
} cont_t;

typedef struct {
    pthread_mutex_t mtx;
    pthread_cond_t  cv;
    int             ready;
    int             has_err;
    void            *val;
    cont_t          *conts;
} shared_state_t;

typedef struct {
    shared_state_t *s;
} future_t;

typedef struct {
    shared_state_t *s;
} promise_t;


int main() {
    printf("hello, world!\n");

    return 0;
}

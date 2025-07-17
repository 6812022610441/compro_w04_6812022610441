#include<stdio.h>

void conutCall() {
    int counter = 0;
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    conutCall();
    printf("After first call:\n");
    conutCall();
    
    return 0;
}

// 
//
// Created by Xuesong Mei on 2023-05-28.
//
#include <stdio.h>
#include "my_lib.h"

void print_hell_world(){
    printf("Hello, Another World2!\n");
}

int factorial( int number ) {
    return number <= 1 ? number : factorial( number - 1 ) * number;  // fail
// return number <= 1 ? 1      : Factorial( number - 1 ) * number;  // pass
}
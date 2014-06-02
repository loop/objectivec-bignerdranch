//
//  main.c
//  Addresses
//
//  Created by Yogesh Nagarur on 01/06/2014.
//  Copyright (c) 2014 Yogesh Nagarur. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    printf("A float consumes %zu bytes\n", sizeof(float));
    printf("A int consumes %zu bytes\n", sizeof(int));
    printf("A short consumes %zu bytes\n", sizeof(short));
    // A short stores 1 bit for sign
    // 2 * 8 = 16 bits
    // 16 - 1 = 15 bits
    // 2^15 = 32768
    // -32768 to +32768
    // unsigned short can hold up to 65536
    printf("A char consumes %zu bytes\n", sizeof(char));

    return 0;
}


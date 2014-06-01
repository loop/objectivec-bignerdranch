//
//  main.c
//  Numbers
//
//  Created by Yogesh Nagarur on 01/06/2014.
//  Copyright (c) 2014 Yogesh Nagarur. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    unsigned long x = 255;
    printf("x is %lu.\n", x);
    
    // Octal and hex already assumed the number was assigned
    printf("In octal, x is %lo.\n", x);
    printf("In hexadecimal, x is %lx.\n", x);
    
    return 0;
}


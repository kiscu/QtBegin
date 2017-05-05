/*
** This program copies its standard input to the standard output, and computes
** a checksum of the characters. The checksum is printed after the input.
*/

#include <stdio.h>
#include <stdlib.h>

int
main( void )
{
    int c;
    char sum = –1;

    /*
    ** Read the characters one by one, and add them to the sum.
    */
    while( (c = getchar())  != EOF  ){
                putchar( c );
                sum += c;
    }

    printf( "%d\n", sum );

    return EXIT_SUCCESS;
}

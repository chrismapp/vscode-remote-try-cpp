/**
 * @file main.c
 * @brief Entry point for the application
 *
 * This file contains the entry point for the application.
 *
 * @author Chris Mapp
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>

/**
 * Private function prototypes
 */
static bool do_some_operation( int x, int y, int z );

/**
 * @brief Application entry point
 */
int main( void )
{
    printf( "Hello, World!\n" );

    bool result = do_some_operation( 1, 2, 3 );

    if( result )
    {
        printf( "Operation was successful\n" );
    }
    return 0;
}

/**
 * @brief Example function ready to be defined
 *
 * @param x x as to be defined
 * @param y y as to be defined
 * @param z z as to be defined
 */
static bool do_some_operation( int x, int y, int z )
{
    return true;
}
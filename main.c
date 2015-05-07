/*
 * Version: 0.0.1
 * Author:  JP
*/

#include "operations.h"

/*
 * This is a main execution point of this application
 * @param argc number on command line arguments
 * @param argv pointer to array containing che command line arguments
 * @return integer containing the exit tatus
 * main (int argc, char **argv)
*/

int main (int argc, char **argv)

{
    int ret_val = printEnvironment ();
    if (ret_val == 0)
    {
	printOneEnvironment ("HOME");
    }
    return 0;
}


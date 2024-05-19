/* 1-2 variables and arithmetic expression excercies */

/* 1-3: modify the tempreature conversion program to print a heading above the table
 * 1-4: write a program to print the corresponding celsius to fahrenheit
 */

#include <stdio.h>

/* print celsius-fahr table
 * for fhar = 0, 20, ..., 300; floating point version */

main()
{
    float celsius, fahr;
    float lower, upper, step;

    lower = 0;		/* lower limit of the temp table */
    upper = 300;	/* upper limit of the temp table */
    step = 20;		/* step size */

    printf("celsius to fahrenheit table\n");

    celsius = lower;
    while (celsius <= upper) {
	    fahr = (celsius) * (9.0/5.0) + 32 ;
	    printf("%6.1f %3.0f\n", celsius, fahr);
	    celsius = celsius + step;
	}
}



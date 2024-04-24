/* 1.2 Variables and Arithmetic Expressions */

#include <studio.h> 

/*print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300
 * C/F temp formula: C = (5/9) (F-32)*/

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;		/* lower limit of temp table*/
    upper = 300;	/* upper limit of temp table*/
    step = 20; 		/* step size*/

    fahr = lower;
    while (fhar <= upper) {
	celsius = 5 * (fahr-32) / 9;
	printf("%d\t&d\n", fahr, celsius;
	fahr = fahr + step;
    }
}

/* in C all variables must be declared before they are used
 * usually at the beginning of the program. */

/* computation in the temperature conversion program begins 
 * with the asingment statements
 *
 * lower = 0;
 * upper = 300;
 * step = 20
 * fahr = lower;
 *
 * which sets the varibles to it's inital values. individual 
 * statements are terminated by semi-colons. */

/*each line of the table is computed the same way, so we use a 
 * loop that repeats once per output line.
 *
 * while (fahr <= upper) {
 * ...
 * }
 *
 * the while loop operates by checking the condition in 
 * parenthesis. if true the body keeps looping until upper is
 * 300, then it terminates when the program continues the 
 * statement after the loop. */

/* the celsius temperature is computed and assigned to the 
 * variable 'celsius' by the statement:
 *
 * celsius = 5 * (fahr-32) / 9;
 *
 * the reason for multiplying by 5 then dividing by 9 instead of
 * just multiplying by by 5/9 is that in C, the integer division 
 * truncates: any fractional part is discarded. since 5 and 9 are
 * integers, 5/9 would be truncated to 0, as well as all celsius. */



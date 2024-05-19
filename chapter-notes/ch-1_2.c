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


/* printf is a general-purpose output formatting function. It's first 
 * argument is a string of characters to be printed, which each % indicating where
 * one of the other (second, third, ...) arguments is to be subsituted, and in 
 * what form it is to be printed. For instance, %d specifies an integer argument
 * so the statement

	printf("%d\t%d\n", fahr, celsius);

 * causes the values of the two integers fahr and celsius to be printed, with a tab (\t)
 * between them. Each % construction in the first argument of printf is paired with the corresponding
 * second argument, third arguement, etc. they must match up properly by number and type, or you'll
 * get the wrong answers. */

/* there are a couple of problems with the temperature conversion program. the simpler one is that 
 * the output isn't pretty because the numbers are not right justified. If we augment each %d in the 
 * printf statement with a width, the numbers printed will be printed in the right justifed in their
 * fields. 
 *
 * 	printf("%3d %6d\n", fahr, celsius);
 *
 * this will print the first number of each line in a field three digits wide, and the second in a field six
 * digits wide:
 *
 *    0    -17
 *    20   -6
 *    40    4
 *    60   15
 *    80   26
 *    100  37
 *    ...
 *
 *    the more serious problem is that because we have used integer arithmetic, the celsius are not very
 *    accurate; for instance, 0f is actually about -17.8c not -17. To get more accurate answers, we should
 *    use the floating point aritihmetic instead of integer. heres the second version. */

/*include <stdio.h>
 *
 * print fahrenheit-celsius table
 *  for fahr = 0, 20, ... 300; floating-point version
 *
 * main()
 */
{
   float fahr, celsius;
   int lower, upper, step;

   lower = 0; 	/* lower limit of temperature table */
   upper = 300; /* upper limit */
   step = 20;   /* step rate */

   fhar = lower;
   while (fahr <= upper) {
	   celsius = (5.0/9.0) * (fahr-32.0);
	   printf("%3.0f %6.1f\n", fahr, celsius);
	   fahr = fahr + step;
   }
}

/* the fahr and celsius are declared to be float, and the formula for conversion is written in a more
 * natural way. we were unable to use 5/9 in the previous version because integer division would 
 * truncate it to zero. A decimal point in a constant indicates that it is a floating point, however,
 * so 5.0/9.0 is not truncated because it is the ration of two floating-point values. if arithmetic 
 * operator has integers, it will run as integers. if it was a float + integers, it will run as a floating 
 * point (i.e 23 + 2.5 = 25.5) but always use floating even on whole numbers to make reading explicitly clear
 * you mean to use a float for both numbers.
 */

/* the printf conversion specification of %3.0f says that a floating point number (here fahr) is to be printed
 * at least three characters wide, with no decimal point or fraction digits. %6.1f describes another number
 * (celcius) that is to be printed at least six characters wide, with 1 digit afte the decimal point. 
 *
 * 0  -17.0
 * 20  -6.7
 * ...
 */

/* width and precision may be omitted from a specification: %6f says that the number is to be at least six
 * characters wide, %.2f specfies two characters after the decimal point, but the width is not constrained; 
 * and %f merely says to print the number as floating point.
 *
 * 	%d	print as a decimal integer
 * 	%6d	print as a decimal integer, at least 6 characters wide
 * 	%f	print as a floating point
 * 	%6f	print as a floating point, at least 6 characters wide
 * 	%.2f	print as a floating point, 2 characters after the decimal point.
 * 	%6.2f	print as a floating point, at least 6 side and 2 after the decimal point.
 *
 * among others, printf also reconizes %o for octal, %x for hexadecimal, %c for character, %s for
 * character string, and %% as itself. 
 */

/* excercise 1-3 modify the temprature conversion program to print a heading above the table
 * excersise 1-4 write a program to print the corresponding celsius to fahrenheit table.
 */

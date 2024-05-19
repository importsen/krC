/* 1-3 the for statement exercise */

/* exercise 1.5. modify the temp conversion program to print the table in reverse order, that is from
 * 300 degrees to 0. 
 */

#include <stdio.h>

/* print fah-cel table */

main()
{
    int fahr;


    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
    	printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

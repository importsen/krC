/* 1.3 - the for statement */
/* there are plenty of different ways to write a program for a particular task.
 * let's try a variation of the temp converter.
 *
 * #include <stdio.h>
 *
 * print fahrenheit-celsius table 
 *
 * main()
 * {
 *
 *     int fahr;
 *
 *     for (fahr = 0; fahr <= 300; fahr = fahr + 20)
 *         print("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
 * 
 * }
 *
 * this produces the same answers, but it looks different. one major change is the elimination of most
 * of the variables; only fahr remains, and we have made it an int. the lower and upper limits and the 
 * step size appear only as constraints in the for statement, itself in a new construction, and the 
 * expression that computes the cel temp now appears as the third argument of printf instead of as a 
 * separate assignment statement. 
 *
 * this last change is an instance of a general rule- in any context where it is permissible to use
 * a variable of some type, you can use a more complicated expression of that type.
 *
 * since the third argument of printf must be a floating-point value to match the %6.1f, any floating point
 * expresson can occur there. 
 *
 * the for statement is a loop, a generalization of the while. if you compare it to the earlier while, its 
 * operation should be clear. within the parentheses, there are three parts, separated by semicolons. 
 *
 * the first part, the initalization:
 * 
 * fhar = 0 
 *
 * is done once before the loop proper is entered. second part is
 * the test or condition that controls the loop:
 *
 * fhar <= 300
 *
 * this condition is evaluated; if its true, the body of the loop (the printf) is executed and the 
 * condition re-evaluated. the loop terminates if the condition has become false. as with the while, the body
 * of the loop can be a single statement, or a group of statements enclosed with braces. the initalization,
 * condition and increment can be any expressions. the choice between while and for is arbitrary, based
 * on which seems clearer. 
 *
 * [chatgbt] a for loop is when the number of iterations are known, combines initalization, condition and
 * iteration in one line.
 *
 * a while loop is used when the number of iterations are unknown, only the condition is specified in the 
 * loop header. 

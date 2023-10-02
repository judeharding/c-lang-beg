#include <stdio.h>

// ========== section 1.1
// main()
// {
//   printf("hello, mike\n");
//   // return 0;
// }

// ========== section 1.2
// /* print Fahrenheit-Celsius table
// for farh = 0, 20, xxx, 300 */

// int main(){
//   float fahr, celsius;
//   int lower, upper, step;

//   lower = 0;      /* lower limit of temp table */
//   upper = 300;    /* upper limit */
//   step = 20;      /* step size */

//   fahr = lower;

//   printf("\n \n Fahrenheit-Celsius table \n \n");

//   while (fahr <= upper){
//     // used when everything was an int
//     // celsius = 5 * (fahr-32)/9;
//     // printf("%d\t%d\n", fahr, celsius);
//     // printf("%3d %6d\n", fahr, celsius);

//     // uses a FLOAT
//     celsius = (5.0/9.0) * (fahr - 32.0);
//     printf("%3.0f %6.1f \n", fahr, celsius);
//     fahr = fahr + step;
//   }

// // ===== exercise 1.3
//   printf("\n \n Celsius-Fahrenheit table \n \n");

//   celsius = lower;

// ===== exercise 1.4
//   while (celsius <= upper){
//        fahr = (celsius * (9.0 / 5.0)) + 32.0;
//     printf(" %6.1f %3.0f \n", celsius, fahr);
//     celsius = celsius + step;
//   }
//   printf("\n\n");
// }

// ========= Section 1.3
/* print Fahrenheit-Celsius table */
// int main()
// {
//   int fahr;

//   for (fahr = 0; fahr <= 300; fahr = fahr + 20)
//   {
//     printf(" %3d %6.1f \n", fahr, (5.0 / 9.0) * (fahr - 32));
//   }
// }
//   // ===== exercise 1.5 print table in reverse

// int main()
// {
//   int fahr;

//   printf("\n \n REVERSE t table \n \n");
//   for (fahr = 300; fahr >= 0; fahr = fahr - 20)
//   {
//     printf(" %3d %6.1f \n", fahr, (5.0 / 9.0) * (fahr - 32));
//   }
// }

//

// // ========= Section 1.4
// #define LOWER 0   /* symbolic constants are not vars & start with #define */
// #define UPPER 300 /* must start with a letter */
// #define STEP 20   /* their replacement can be numbers or letters & no semicolen */

// int main()
// {
//   int fahr;

//   for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
//     printf("%3d %6.1f \n", fahr, (5.0 / 9.0) * (fahr - 32));
// }

// ========= Section 1.5

/* copy input to output - 1st version*/

// int main()
// {
//   int c;
//   c = getchar();
//   while (c != EOF)
//   {
//     putchar(c);
//     c = getchar();
//   }
// }
// testing change
// smaller version of above
//   while((c = getchar()) != EOF)
//     putchar(c);

// int main()
// {
//   int c;

//   while ((c = getchar()) != EOF)
//     putchar(c);
// }

// int main()
// {

//   int c;
//   c = getchar() != EOF;
//   // if ((c = getchar()) == EOF)

//   putchar(c);
// }

// ========== exercise 1.6

int main()
{
  int c;

  while ((c = getchar()) != EOF)
    printf("%d\n", c);
}

// OR
// c = getchar();
// printf("%5d", c); // looks like this returns the ASCII code
// }

// int main()
// {
//   long nc;

//   nc = 0;

//   while (getchar() != EOF)
//     ++nc;
//   printf("%ld\n", nc);
// }

// found in stackoverflow because there is an error with the 1989 book version and current version of C
// #define EOL '\n'

// main()
// {
//   long nc;
//   int c;
//   nc = 0;

//   while ((c = getchar()) != EOF)
//   {
//     ++nc;
//     if (c == EOL)
//     {
//       /* Print number of input characters (not including return character) */
//       printf("%ld\n", nc - 1);
//       nc = 0;
//     }
//   }
// }

// DOESN'T WORK
// int main()
// {
//   double nc;

//   for (nc = 0; getchar() != EOF; ++nc)
//     ;
//   printf("%.0f\n", nc);
// }

// DOES work - from stack overflow 1.5.2
// #define EOL '\n'

// main()
// {
//   double nc;
//   int c;
//   nc = 0;

//   while ((c = getchar()) != EOF)
//   {
//     ++nc;
//     if (c == EOL)
//     {
//       /* Print number of input characters (not including return character) */
//       printf("%.0f\n", nc - 1);
//       nc = 0;
//     }
//   }
// }

// ========== exercise 1.8 page 20 STUCK

// int main()
// {
//   int c, n1;

//   n1 = 0;

//   while ((c = getchar()) != EOF)
//   {
//     if (c == '\n')
//       ++n1;
//     c = getchar();

//     putchar(c);
//     c = getchar();

//     printf("%d\n\n", n1);
//     // n1 = 0;
//   }
// }

// int main()
// {
//   int c;
//   while ((c = getchar()) != EOF)
//   {
//     if (c == ' ')
//     {
//       while ((c = getchar()) == ' ')
//         ;
//       putchar(' ');
//       if (c == EOF)
//         break;
//     }
//     putchar(c);
//   }
// }
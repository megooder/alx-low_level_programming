1#include <stdlib.h>
2 #include <time.h>
3 #include <stdio.h>
4 /**
5  * main – Entry point
6  *
7  * Description: Prints Rand number ,>5 ,<6 ,=0
8  *
9  * Return: Always 0 (success)
10  */
11 int main(void)
12 {
13 int n;
14 srand(time(0));
15 n = rand() - RAND_MAX / 2;
16 if ((n % 10) > 5)
17 {
18 printf("Last digit of %d is %d and is greater than 5\n",
19 n, n % 10);
20 }
21 else if ((n % 10) < 6 && (n % 10) != 0)
22 {
23 printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
24 }
25 else
26 {
27 printf("Last digit of %d is %d and is 0\n", n, n % 10);
28 }
29 return (0);
30 }
~

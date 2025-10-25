#include <stdio.h>
#include <math.h>

int main(void){


double principal =0.0;
double rate = 0.0;
int years = 0;
int timesCompounded = 0;
double total = 0.0;
double interest = 0.0;


printf("Compound Interest Calculator\n");

printf("Enter the principal(P): ");
scanf("%lf", &principal);


printf("Enter the interest rate % (r): ");
scanf("%lf", &rate);
rate = rate / 100;


printf("Enter the # of years (t): ");
scanf("%d", &years);

printf("Enter the number of times compounded (n): ");
scanf("%d", &timesCompounded);



total = principal * pow(1 + rate / timesCompounded, timesCompounded * years);
interest = total - principal;


printf("After %d years, the total will be %2.lf.\n", years, total);
printf("Total interest earned in %d year/years is %2.lf.\n", years, interest);


    return 0;
}



#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Elijah Luehrmann
 * ID: 201942447
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 36250;
   float national_insurrance = 8;
   float tax_rate = 15;
   // calculate multipliers based on the NI/tax rates
   float national_insurrance_multiplier = national_insurrance / 100;
   float tax_rate_multiplier = tax_rate / 100;
    // calculate the national insurrance deduction
   float national_insurrance_paid = salary * national_insurrance_multiplier;
   float salary_minus_national_insurance = salary - national_insurrance_paid;
   // if remaining is less than the personal allowance then no tax is paid
   float tax_paid;
   float take_home_pay;
   if (salary_minus_national_insurance < 12500){
      take_home_pay = salary_minus_national_insurance;
      tax_paid = 0;
   }
   // othersie calculate tax paid
   else{
      take_home_pay = 12500;
      salary_minus_national_insurance = salary_minus_national_insurance - 12500;
      tax_paid = salary_minus_national_insurance * tax_rate_multiplier;
      take_home_pay = take_home_pay + salary_minus_national_insurance - tax_paid;
   }
   
    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",national_insurrance_paid);
    printf("Tax contribution £%.2f\n",tax_paid);
    printf("Take home salary £%.2f\n",take_home_pay);

    return 0;
 }
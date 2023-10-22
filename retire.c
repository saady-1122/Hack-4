# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main(argc.char*argv[])
{
    if(argc!=6)
    {
      printf("Usage: %s <Starting Balance> <Monthly Contribution> <Annual Rate of Return> <Annual Rate of Inflation> <Years until Retirement>\n", argv[0]);
        return 1;
    }

     double initialBalance = atof(argv[1]);
     double monthlyContribution = atof(argv[2]);
     double annualRateReturn = atof(argv[3]);
     double annualRateInflation  = atof(argv[4]);
     int yearsUntilRetirement = atoi(argv[5]);


     if (initialBalance<=0 || monthlyContribution <=0 || annualRateReturn<=0 || annualRateInflation <=0 || yearsUntilRetirement<=0){

        printf("Please enter valid positive values for all inputs.\n");
        return 1;
    }



     double monthlyRateReturn = pow(1 + annualRateReturn, 1/12)-1;
     double monthlyRateOfInflation = pow(1.0 + annualRateInflation, 1.0 / 12.0) - 1;
     double totalInterestEarned = 0;
     double totalNestEgg = initialBalance;


     printf("Month  Interest  Balance\n");
    for (int month = 1; month <= yearsUntilRetirement; month++)
     {
    
     double monthlyInterest = totalNestEgg * monthlyRateReturn;
     totalInterestEarned += monthlyInterest;
      totalNestEgg += monthlyInterest + monthlyContribution;
      printf("%5d $%10.2lf $%10.2lf\n", month, monthlyInterest, totalNestEgg);
      }
    printf("Total Interest Earned $%10.2lf\n", totalInterestEarned);
     printf("Total Nest Egg $%10.2lf\n", totalNestEgg);

     return 0;

      }













}
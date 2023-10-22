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

}
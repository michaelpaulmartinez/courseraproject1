#include <stdio.h>
#include <stdlib.h>

/*
savings(while working)
and
expenditure(while retired)


*/

typedef struct _retire_info {
  int months; //#of months
  double contribution; //# of dollars contributed(or spent if negative) each month
  double rate_of_return; //rate of returns
} retire_info;

void retirement (int startAge, double initial, retire_info working, retire_info retired) {
  double balance = initial;
  int total_months = startAge - 1;
  for (int i = 0; i < working.months; i++) {
    //account balance increase
    total_months += 1;
    printf("Age %3d month %2d you have $%.2lf\n", total_months / 12, total_months % 12, balance);
    balance += balance * working.rate_of_return;
    balance += working.contribution;
  }
for (int i = 0; i < retired.months; i++) {
    //account balance increase
    total_months += 1;
    printf("Age %3d month %2d you have $%.2lf\n", total_months / 12, total_months % 12, balance);
    balance += balance * retired.rate_of_return;
    balance += retired.contribution;
  }
    
}

 int main (void) {
    int startAge = 327;
    double initial = 21345.00;
    retire_info working_retire_info;
    working_retire_info.months = 489;
      working_retire_info.contribution = 1000.0;
      working_retire_info.rate_of_return = .045/12.0;
    retire_info retired;
    retired.months = 384;
    retired.contribution = -4000;
    retired.rate_of_return = 0.01 / 12.0;
    retirement(startAge, initial, working_retire_info, retired);
    return 0;
  }
    

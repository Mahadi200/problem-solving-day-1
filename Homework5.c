#include <stdio.h>

int main(){

int total_days=1329;

int years,weeks,days;

years=total_days/365;

total_days=total_days%365;

weeks=total_days/7;

days=total_days%7;

printf("Years:%d\n",years);
printf("Weeks:%d\n",weeks);
printf("Days:%d\n",days);

return 0;
}


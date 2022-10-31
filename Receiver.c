#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "Transmitter.h"
int battery_temperature[50],battery_state_of_charge[50];

void calculate_battery_health(int bat_temp,int bat_soc,int counter)
{
  battery_temperature[counter] = bat_temp;
  battery_state_of_charge[counter] = bat_soc;
  if(battery_state_of_charge[counter] < 20)
  {
    if( battery_temperature[counter] > 50)
    {
      printf("Battery is in bad condition\n");
       printf("%d,%d\n", battery_temperature[counter],battery_state_of_charge[counter]);
    }
  }
  
}

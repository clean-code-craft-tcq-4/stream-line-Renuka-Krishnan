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
    if( battery_temperature[counter] > 40 || battery_temperature[counter] < 0 )
    {
      printf("Battery is in bad condition%d,%d\n", battery_temperature[counter],battery_state_of_charge[counter]);
    }
    if( battery_temperature[counter] < 40 && battery_temperature[counter] > 0 )
    {
      printf("Battery is in good condition%d,%d\n", battery_temperature[counter],battery_state_of_charge[counter]);
    }
  }
  
   if(battery_state_of_charge[counter] >20 && battery_state_of_charge[counter] <40)
  {
        if( battery_temperature[counter] > 40 || battery_temperature[counter] < 0 )
    {
      printf("Battery is in bad condition%d,%d\n", battery_temperature[counter],battery_state_of_charge[counter]);
    }
    if( battery_temperature[counter] < 40 && battery_temperature[counter] > 0 )
    {
      printf("Battery is in good condition%d,%d\n", battery_temperature[counter],battery_state_of_charge[counter]);
    }
  }
  
  if(battery_state_of_charge[counter] >40 && battery_state_of_charge[counter] <60)
  {
        if( battery_temperature[counter] > 40 || battery_temperature[counter] < 0 )
    {
      printf("Battery is in bad condition%d,%d\n", battery_temperature[counter],battery_state_of_charge[counter]);
    }
    if( battery_temperature[counter] < 40 && battery_temperature[counter] > 0 )
    {
      printf("Battery is in good condition%d,%d\n", battery_temperature[counter],battery_state_of_charge[counter]);
    }
  }
  if(battery_state_of_charge[counter] >60 && battery_state_of_charge[counter] <80)
  {
       if( battery_temperature[counter] > 40 || battery_temperature[counter] < 0 )
    {
      printf("Battery is in bad condition%d,%d\n", battery_temperature[counter],battery_state_of_charge[counter]);
    }
    if( battery_temperature[counter] < 40 && battery_temperature[counter] > 0 )
    {
      printf("Battery is in good condition%d,%d\n", battery_temperature[counter],battery_state_of_charge[counter]);
    }
  }
  if(battery_state_of_charge[counter] >80)
  {
          if( battery_temperature[counter] > 40 || battery_temperature[counter] < 0 )
    {
      printf("Battery is in bad condition%d,%d\n", battery_temperature[counter],battery_state_of_charge[counter]);
    }
    if( battery_temperature[counter] < 40 && battery_temperature[counter] > 0 )
    {
      printf("Battery is in good condition%d,%d\n", battery_temperature[counter],battery_state_of_charge[counter]);
    }
  }
  
}

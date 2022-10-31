#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAXIMUM_SENSOR_READINGS 50  

typedef enum 
{
  OK,
  NOT_OK
}Ret_Status;

typedef enum 
{
  StopTransmit,
  StartTransmit
} Modes;

Ret_Status ReadSensorData();
Ret_Status PrintOnConsole(Modes TransmissionRequest);
void calculate_battery_health(int bat_temp,int bat_soc,int counter);

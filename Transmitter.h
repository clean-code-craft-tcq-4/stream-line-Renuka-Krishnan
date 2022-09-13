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

Ret_Status Return1,  Return2;
int BufferSize ;//= 0;
int BatteryTemp[45];//={0};
int BatterySoc[45];//={0};

Ret_Status ReadSensorData();
Ret_Status PrintOnConsole(Modes TransmissionRequest);

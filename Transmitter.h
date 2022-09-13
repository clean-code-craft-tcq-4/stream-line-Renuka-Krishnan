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

int BufferSize;
Ret_Status ReadSensorData();
Ret_Status PrintOnConsole(Modes TransmissionRequest);

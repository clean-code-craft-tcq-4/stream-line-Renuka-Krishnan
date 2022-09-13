#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAXIMUM_SENSOR_READINGS 50  
extern Ret_Status ReadSensorData();

typedef enum 
{
  OK,
  NOT_OK
};Ret_Status

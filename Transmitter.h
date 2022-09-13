#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAXIMUM_SENSOR_READINGS 50  
extern RET_STATUS ReadSensorData();

typedef enum 
{
  OK,
  NOT_OK
};RET_STATUS

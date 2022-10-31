#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "Transmitter.h"

int BatteryTemp[MAXIMUM_SENSOR_READINGS];
int BatterySoc[MAXIMUM_SENSOR_READINGS];
Ret_Status Return1,  Return2;
int BufferSize = 0;

Ret_Status ReadSensorData()
{
  FILE *fp;
  int data = 1; 
  Return1=NOT_OK;   	
  fp = fopen("./BMS_Sensor_Data.txt", "r");
  
  if (fp != NULL)
  {
      int ReadTemp, ReadSoc, Index =0;
      while(data != EOF)
      {
       data = fscanf(fp,"%d %d",&ReadTemp, &ReadSoc);
       BatteryTemp[Index] =ReadTemp;   
       BatterySoc[Index]= ReadSoc;
        calculate_battery_health(BatteryTemp,BatterySoc,Index);
       Index++;
      }
       BufferSize=Index;
       Return1= OK;
  }	
 fclose(fp);
 return Return1;
}

Ret_Status PrintOnConsole(Modes TransmissionRequest)
{
Return2 = NOT_OK;
    if (TransmissionRequest)
      {
       for(int i=0; i < BufferSize-1; i++)
         {
           printf("%d,%d\n", BatteryTemp[i],BatterySoc[i]);
         }
      Return2= OK;
     }	
return Return2;
}

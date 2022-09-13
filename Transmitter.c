#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "Transmitter.h"
   
Ret_Status ReadSensorData()
{
  FILE *fp;
  int Buffer = 1; 
  Return1=NOT_OK;   	
  fp = fopen("./BMS_Sensor_Data.txt", "r");
  
  if (fp != NULL)
  {
      int ReadTemp, ReadSoc, Index =0;
      while(Buffer != EOF)
      {
       Buffer = fscanf(fp,"%d %d",&ReadTemp, &ReadSoc);
       BatteryTemp[Index] =ReadTemp;   
       BatterySoc[Index]= ReadSoc;
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

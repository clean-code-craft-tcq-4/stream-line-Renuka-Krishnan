#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "Test/catch.hpp"
#include "Transmitter.h"

TEST_CASE("Test to verify if the file is opened successfully") 
{
 FILE *fp = fopen("./BMS_Sensor_Data.txt", "r"); 
 REQUIRE_NOTHROW(ReadSensorData()== OK); 
}

TEST_CASE("Test to display the data read from the file on the console") 
{
  Modes TransmissionRequest = StartTransmit;
  REQUIRE(PrintOnConsole(TransmissionRequest)== OK);
}

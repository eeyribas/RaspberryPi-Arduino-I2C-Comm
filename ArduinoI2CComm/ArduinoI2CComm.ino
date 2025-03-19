#include <Wire.h>

#define SLAVE_ADDRESS 0x08

byte data_to_echo = 0;

void setup() 
{
  Wire.begin(SLAVE_ADDRESS);
  Wire.onReceive(ReceiveData);
  Wire.onRequest(SendData);
}

void loop() 
{

}

void ReceiveData(int byte_count) 
{
  for (int i = 0; i < byte_count; i++)
    data_to_echo = Wire.read();
}

void SendData() 
{
  Wire.write(data_to_echo);
}
#pragma config(Sensor, in1,    lineT,          sensorLineFollower)
#pragma config(Sensor, dgtl1,  button,         sensorTouch)
#pragma config(Sensor, dgtl10, green,          sensorLEDtoVCC)
#pragma config(Sensor, dgtl11, red,            sensorLEDtoVCC)
#pragma config(Sensor, dgtl12, yellow,         sensorLEDtoVCC)
#pragma config(Motor,  port1,           trap,          tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port10,          move,          tmotorVex393_HBridge, openLoop)
task main()
{
  turnLEDOn(green);
}

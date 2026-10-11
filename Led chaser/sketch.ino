#include "GPIO.h"
void setup() {
  // put your setup code here, to run once:
  GPIO_PINMODE('A',0,output);
  GPIO_PINMODE('A',1,output);
  GPIO_PINMODE('A',2,output);
  GPIO_PINMODE('A',3,output);
  GPIO_PINMODE('A',4,output);
  GPIO_PINMODE('A',5,output);
  GPIO_PINMODE('A',6,output);
}

void loop() {
  // put your main code here, to run repeatedly:
  GPIO_WRITE('A',0,high);
  delays(1);
  GPIO_WRITE('A',0,low);

  GPIO_WRITE('A',1,high);
  delays(1);
  GPIO_WRITE('A',1,low);

  GPIO_WRITE('A',2,high);
  delays(1);
  GPIO_WRITE('A',2,low);

  GPIO_WRITE('A',3,high);
  delays(1);
  GPIO_WRITE('A',3,low);

  GPIO_WRITE('A',4,high);
  delays(1);
  GPIO_WRITE('A',4,low);

  GPIO_WRITE('A',5,high);
  delays(1);
  GPIO_WRITE('A',5,low);

  GPIO_WRITE('A',6,high);
  delays(1);
  GPIO_WRITE('A',6,low);
}

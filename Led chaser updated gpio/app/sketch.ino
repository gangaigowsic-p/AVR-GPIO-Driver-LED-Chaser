#include "GPIO.h"

   gpio_config led0 = {
  .mode = gpio_output,
  .state = gpio_high,
  .pinVal = 0
};
  gpio_config led1 = {
  .mode = gpio_output,
  .state = gpio_high,
  .pinVal = 1
};
  gpio_config led2 = {
  .mode = gpio_output,
  .state = gpio_high,
  .pinVal = 2
}; 
  gpio_config led3 = {
  .mode = gpio_output,
  .state = gpio_high,
  .pinVal = 3
}; 
  gpio_config led4 = {
  .mode = gpio_output,
  .state = gpio_high,
  .pinVal = 4
}; 
  gpio_config led5 = {
  .mode = gpio_output,
  .state = gpio_high,
  .pinVal = 5
}; 
  gpio_config led6 = {
  .mode = gpio_output,
  .state = gpio_high,
  .pinVal = 6
}; 
  gpio_config led7 = {
  .mode = gpio_output,
  .state = gpio_high,
  .pinVal = 7
};
void setup() {
  // put your setup code here, to run once:
  GPIO_init(gpioa,&led0);
  GPIO_init(gpioa,&led1);
  GPIO_init(gpioa,&led2);
  GPIO_init(gpioa,&led3);
  GPIO_init(gpioa,&led4);
  GPIO_init(gpioa,&led5);
  GPIO_init(gpioa,&led6);
  GPIO_init(gpioa,&led7);
  

  
}

void loop() {
  // put your main code here, to run repeatedly:
  //GPIO_Toggle(gpioa,&led0);
  led0.state = 1;
  GPIO_Write(gpioa,&led0);
  delays();
  led0.state = 0;
  GPIO_Write(gpioa,&led0);

  led1.state = 1;
  GPIO_Write(gpioa,&led1);
  delays();
  led1.state = 0;
  GPIO_Write(gpioa,&led1);

    led2.state = 1;
  GPIO_Write(gpioa,&led2);
  delays();
  led2.state = 0;
  GPIO_Write(gpioa,&led2);

    led3.state = 1;
  GPIO_Write(gpioa,&led3);
  delays();
  led3.state = 0;
  GPIO_Write(gpioa,&led3);

    led4.state = 1;
  GPIO_Write(gpioa,&led4);
  delays();
  led4.state = 0;
  GPIO_Write(gpioa,&led4);

    led5.state = 1;
  GPIO_Write(gpioa,&led5);
  delays();
  led5.state = 0;
  GPIO_Write(gpioa,&led5);

    led6.state = 1;
  GPIO_Write(gpioa,&led6);
  delays();
  led6.state = 0;
  GPIO_Write(gpioa,&led6);
  
  led7.state = 1;
  GPIO_Write(gpioa,&led7);
  delays();
  led7.state = 0;
  GPIO_Write(gpioa,&led7);
}
